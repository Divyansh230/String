#include <stdio.h>
#include <string.h>

int main(){
    char c[10],a[10];
    scanf("%s%s",c,a);
    int x=strcmp(c,a);
    if(x==0){
        printf("Equal");
    }
    else
    printf("Unequal");
    return 0;
}