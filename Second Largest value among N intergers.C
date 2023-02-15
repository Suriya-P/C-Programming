/* Input : 3
           100 2200 345
   Output : 345
*/


#include <stdio.h>

int main() {
    int n,i,j,k=0,s[1000],a[1000];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        for(j=i;j<n;j++){
            if(a[i]>a[j]){
                s[k]=a[i];
                k++;
            }
        }
    }
    printf("%d %d",s[k-2],s[k-1]);
    return 0;
}
