/* Input : 3
           100 2200 345
   Output : 345
*/


#include <stdio.h>

int main() {
    int n,i,j,t,a[1000];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i]>a[j]){
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    printf("%d",a[n-2]);
    return 0;
}
