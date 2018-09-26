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

void Update(char *mainString, char *patternReplace, char *patternInsert) {
    int delPatSize=0, insPatSize=0;
    for(int i=0; patternInsert[i]!=0; ++i) insPatSize++;
    for(int i=0; patternReplace[i]!=0; ++i) delPatSize++;
}

int main(){
    char str[100] = "Amar Shonar Bangla, Ami Amay Valobashi! Amay!", delPat[100] = "Amay", insPat[100] = "Tomay";
    update(str, delPat, insPat);
    printf("%s\n", str);
    return 0;
}
