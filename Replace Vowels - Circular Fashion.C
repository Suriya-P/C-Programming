/*  Input : kingkong
    Output : kangkeng
*/

#include <stdio.h>

int main() {
    char s[10000];
    scanf("%s",s);
    int l=strlen(s),i,k=0;
    int v[5]={'a','e','i','o','u'};
    for(i=0;i<l;i++){
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
            if(k<5){
                printf("%c",v[k]);
                k++;
            }else{
                printf("%c",v[k%5]);
                k++;
            }
        }else{
            printf("%c",s[i]);
        }
    }
    return 0;
}
