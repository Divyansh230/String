#include <stdio.h>
#include <string.h>

int main(){
    char x[100];
    scanf("%[^\n]",&x);
    char c[100];
    strcpy(c,x);
    printf("%s",c);
    return 0;
}