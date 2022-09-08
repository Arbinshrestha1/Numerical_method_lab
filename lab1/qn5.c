#include <stdio.h>

int main(){
	
     float a[100],sum=0,x;
     int n,i;

     printf("\nEnter degree of polynomial x: ");
     scanf("%d",&n);
     
     printf("\nEnter coefficient of polynomial x: \n");
     
     for(i=n;i>=0;i--){
     	
            printf("\nEnter Coefficient of [ x^%d ]: ",i);
            scanf("%f",&a[i]);
     }

     printf("\nEnter the value of x: ");
     scanf("%f",&x);

     for(i=n;i>0;i--){
        sum=(sum+a[i])*x;
     }

     sum=sum+a[0];

     printf("\nThe required value of polynomial is =  %f\n",sum);

     return 0;
}
