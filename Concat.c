#include <stdio.h>
#include <string.h>

int main(){
    char x[100],y[100];
    scanf("%s\n%s",&x,&y);
    strcat(x,y);
    printf("%s",x);
    return 0;
}