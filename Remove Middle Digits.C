/* Input : 4785
   Output : 45
*/


#include <stdio.h>

int main() {
   int n,i=0,a[100];
   scanf("%d",&n);
   while(n>0){
       a[i]=n%10;
       i++;
       n=n/10;
    }
    printf("%d%d",a[i-1],a[0]);
    return 0;
}
