#include <stdio.h>

int main(){
    char c[100];
    scanf("%s",c);
    int b[26];
    for(int i=0;i<26;i++)
    b[i]=0;
    for(int i=0;c[i];i++){
        b[c[i]-97]++;
    }
    int f=0;
    for(int i=0;i<26;i++){
        if(b[i]=0)
        f+=1;
        break;
    }
    if(!f)
    printf("PanaGRam");
    else
    printf("Not Panagram");
    return 0;
}