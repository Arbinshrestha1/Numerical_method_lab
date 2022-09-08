//Qn3
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>

#define    f(x)    x*x*x - 3*x - 7

int main(){
	 float x0, x1, x2, f0, f1, f2, e, error;
	 int step = 1;
	 
	 printf("\nEnter initial guesses:\n");
	 scanf("%f%f", &x0, &x1);
	 
	 printf("Enter error:\n");
	 scanf("%f", &e);
	 
	
	 printf("\nStep\t\t x0\t\t x1\t\t x2\t\t f(x2)\t\t error\n");
	 
	 do{
		  f0 = f(x0);
		  f1 = f(x1);
		  
		  if(f0 == f1){
			   printf("Mathematical Error.");
			   exit(0);
		  }
		  
		  x2 = x1 - (x1 - x0) * f1/(f1-f0);
		  f2 = f(x2);
		  error = (x1-x0)/x1;
		  
		  printf("%d\t\t%f\t%f\t%f\t%f\t%f\n",step,x0,x1,x2, f2, error);
		  
		  x0 = x1;
		  f0 = f1;
		  x1 = x2;
		  f1 = f2;
		  
		  step = step + 1;
		  
	 }while(fabs(error)>e);
	
	 printf("\nThe required root is: %f", x2);
	 
	 return 0;
}
