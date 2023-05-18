#include <stdio.h>
#include <string.h>

int main(){
    char x[100];
    scanf("%[^\n]",&x);
    int l=strlen(x);
    printf("Length = %d",l);
    return 0;
}