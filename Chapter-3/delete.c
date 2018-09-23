#include<stdio.h>

void deleted(char *str, int pos, int len){
    int strLen=0, i;
    while(str[strLen]!='\0') strLen++;
    for(i=pos; i<=strLen-len; i++) str[i]=str[i+len];
}

int main(){
    char str[100]="Amar Shonar Bangladesh, Ami Tomay Valobashi!";
    int pos=18, len=4;
    deleted(str, pos, len);
    printf("%s\n", str);
    return 0;
}
