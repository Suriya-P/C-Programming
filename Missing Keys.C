/* Input : abcdefghijlmnopqrtuvwxyz
   Output : ks
*/

#include <stdio.h>

int main() {
    char s[100];
    scanf("%s",s);
    int l=strlen(s),i,j,f,k;
    for(i=97;i<=122;i++){
        f=0;
        for(j=0;j<l;j++){
            k=s[j];
            if(k==i){
                f=1;
                break;
            }
        }if(!f){
            printf("%c",i);
        }
    }

    return 0;
}
