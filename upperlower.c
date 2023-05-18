#include <stdio.h>

int main(){
    char c[10];
    scanf("%s",c);
    for(int i=0;c[i];i++)
    printf("%c",c[i]+32);
    return 0;
}