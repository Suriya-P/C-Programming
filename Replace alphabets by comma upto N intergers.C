/* Input : 4
           123ygsy34uhd2hu23nsu9uh7yg
   Ouput : 123,34,2,23
*/

#include <stdio.h>
#include <string.h>

int main() {
    int n,i,l,q=0;
    scanf("%d",&n);
    char s[1000];
    scanf("%s",s);
    l=strlen(s);
    for(i=0;i<l;i++){
        if(isalpha(s[i])){
            q=q+1;
            if(q==n){
                return 0;
            }
            printf(",");
            while(isalpha(s[i])){
                i++;
            }
            i--;
        }else{
            printf("%c",s[i]);
        }
    }
    return 0;
}
