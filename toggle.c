#include <stdio.h>

int main(){
    char c[10];
    scanf("%s",c);
    for(int i=0;c[i];i++){
        if(c[i]<=90&&c[i]>=64)
        printf("%c",c[i]+32);
        else
        printf("%c",c[i]-32);
    }
    return 0;
}