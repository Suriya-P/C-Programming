/* Input : 4
           12e56y877z1234
  Output : 12,56,877,1234
*/

#include <stdio.h>

int main() {
    int n,i,l;
    scanf("%d",&n);
    char s[1000];
    scanf("%s",s);
    l=strlen(s);
    for(i=0;i<l;i++){
        if(isalpha(s[i])){
            printf(",");
        }else{
            printf("%c",s[i]);
        }
    }
    return 0;
} 
