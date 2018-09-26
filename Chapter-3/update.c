#include<stdio.h>

void Insert(char *str, int pos, char *subStr){
    int subStrLen=0, strLen=0, i;
    while(str[strLen]!='\0') strLen++;
    while(subStr[subStrLen]!='\0') subStrLen++;
    for(i=strLen; i>=pos; i--) str[i+subStrLen]=str[i];
    for(i=pos; i<pos+subStrLen; i++) str[i]=subStr[i-pos];
}

void Delete(char *str, int pos, int len){
    int strLen=0, i;
    while(str[strLen]!='\0') strLen++;
    for(i=pos; i<=strLen-len; i++) str[i]=str[i+len];
}

void patternMatching1(char *mainString, char *query, int pos[100]){
    int strLen=0, i, qStrLen=0, j, f, arrPos=0, found;
    while(mainString[strLen]!='\0') strLen++;
    while(query[qStrLen]!='\0') qStrLen++;
    for(i=0; i<strLen-qStrLen; i++){
        if(mainString[i]==query[0]) {
            f=1;
            for(j=1; j<qStrLen; j++){
                if(mainString[i+j]!=query[j]) {
                    f=0;
                    break;
                }
            }
            if(f==1){
                pos[arrPos]=i+1;
                arrPos++;
                i+=qStrLen-1;
            }
            else i++;
        }
    }
}

void Update(char *mainString, char *patternReplace, char *patternInsert) {
    int delPatSize=0, insPatSize=0, pos[100], i;
    for(i=0; i<100; i++) pos[i]=0;
    for(int i=0; patternReplace[i]!=0; ++i) delPatSize++;
    patternMatching1(mainString, patternReplace, pos);
    while(pos[i]!=0){
        Delete(mainString, pos[i]-1, delPatSize);
        Insert(mainString, pos[i]-1, patternInsert);
    }
}

int main(){
    char str[100] = "Amar Shonar Bangla, Ami Amay Valobashi! Amay!", delPat[100] = "Amay", insPat[100] = "Tomay";
    Update(str, delPat, insPat);
    printf("%s\n", str);
    return 0;
}
