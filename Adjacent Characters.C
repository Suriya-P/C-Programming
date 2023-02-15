/*
Input : environment e
Output : nmn

Input : #$! e
Ouput : -1
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char s[1000],c;
    scanf("%s %c",s,&c);
    int l=strlen(s),i,j=0,f=0;
    for(i=0;i<l;i++){
        if(s[i]==c){
            f=1;
            if(i==0){
                printf("%c",s[i+1]);
            }else if(i==l-1){
              printf("%c",s[i-1]);
            else{
                printf("%c%c",s[i-1],s[i+1]);
            }
        }
    }
  if(f==0){
    printf("-1");
    return 0;
}
