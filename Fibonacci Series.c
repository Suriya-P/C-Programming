/* input : 10
	output : 0 1 1 2 3 5 8 13 21 34
*/

#include<stdio.h>    
int main()
{    
 	int num1=0,num2=1,num3,i,n;    
 	printf("Enter the number of elements:");    
 	scanf("%d",&n);    
 	printf("\n%d %d",num1,num2);    //printing 0 and 1    
 	for(i=2;i<n;i++){               //loop starts from 2 because 0 and 1 are already printed    
	 	num3=num1+num2;
	 	printf(" %d",num3);    
  	 	num1=num2;    
     	num2=num3;    
 	}return 0;  
}    
