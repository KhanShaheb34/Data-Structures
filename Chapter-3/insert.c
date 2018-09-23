#include<stdio.h>

void insert(char *str, int pos, char *subStr){
    int subStrLen=0, strLen=0, i;
    while(str[strLen]!='\0') strLen++;
    while(subStr[subStrLen]!='\0') subStrLen++;
    for(i=strLen; i>=pos; i--) str[i+subStrLen]=str[i];
    for(i=pos; i<pos+subStrLen; i++) str[i]=subStr[i-pos];
}

int main(){
    char str[100]="Amar Shobar Bangla, Ami  Valobashi!", subStr[100]="Tomay";
    int pos=24;
    insert(str, pos, subStr);
    printf("%s\n", str);
    return 0;
}
