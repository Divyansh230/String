#include <stdio.h>
#include <string.h>

int main(){
    char c[10];
    printf("Enter String in lower:");
    scanf("%s",c);
    for(int i=0;c[i];i++){
        printf("%c",c[i]-32);
    }
    return 0;
}