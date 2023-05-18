#include <stdio.h>


int main(){
    char a[100],c[100];
    scanf("%s%s",a,c);

    
    int b[26];
    int s[26];
    for(int i=0;i<26;i++){
        b[i]=0;
        s[i]=0;
    }
    for(int i=0;a[i];i++){
    b[a[i]-97]++;
    s[c[i]-97]++;}
 int f=0;
    for(int i=0;b[i]&&s[i];i++){
       f(b[i]!=s[i])
        {
            f+=1;
            break;
         i}
    }
    if(f)
    printf("Not a anagram");
    else
    printf("Anagram");
    return 0;
}