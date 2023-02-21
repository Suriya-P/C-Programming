/* Input : ac
   Output : 29

  Input : all
  Output : 1000
*/

#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
    char s[100];
    scanf("%s",s);
    int l=strlen(s),i,k,a=0,p,sum=0;
    if(l==1){
        printf("%d",s[0]-96);
    }else{
        for(i=l-1;i>=0;i--){
            k=s[i]-96;
            p=pow(26,a);
            p=p*k;
            a++;
            sum=sum+p;
        }
        printf("%d",sum);
    }
    return 0;
}
