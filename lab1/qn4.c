//Qn4
#include<stdio.h>
#include<conio.h>
#include<math.h>

#define   f(x)   cos(x)-3*x+1
#define   g(x)   (1+cos(x))/3

int main()
{
	 int step=1;
	 float x0, x1, e, error;
	 
	 printf("Enter initial guess: ");
	 scanf("%f", &x0);
	 
	 printf("Enter error: ");
	 scanf("%f", &e);
	 
	 printf("\nStep\t\t x0\t\t f(x0)\t\t x1\t\t f(x1)\t\t error\n");
	 do{
		  x1 = g(x0);
		  error=(x1-x0)/x1;
		  
		  printf("%d\t%f\t%f\t%f\t%f\t%f\n",step, x0, f(x0), x1, f(x1), error);
		
		  step = step + 1;
		
		  x0 = x1;
		  
		  
	 }while( fabs(error) > e);
	 
	 printf("\nThe required root is %f", x1);
	
	 return(0);
}
