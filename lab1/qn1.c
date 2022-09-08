//Qn1
#include<stdio.h>
#include<conio.h>
#include<math.h>


#define f(x) x*x*x - 2*x - 5

int main(){
	
	 float x0, x1, x2, f0, f1, f2, e;
	 int step = 1;
	 
	 top:
	 	printf("Function f(x) = x^3-2x-5");
	 printf("\nEnter two initial guess:\n");
	 scanf("%f%f", &x0, &x1);
	 printf("Enter error:\n");
	 scanf("%f", &e);
	 
	 f0 = f(x0);
	 f1 = f(x1);
	 
	 if( f0 * f1 > 0.0){
		  printf("Initial Guesses are incorrect.\n");
		  goto top;
	 }
	 
	 printf("\nStep\t\t  x0\t\t  x1\t\t  x2\t\t  f(x2)\n");
	 
	 do{
		  x2 = (x0 + x1)/2;
		  f2 = f(x2);
		
		  printf("%d\t\t%f\t%f\t%f\t%f\n",step, x0, x1, x2, f2);
		
		  if(f0 * f2 < 0){
			   x1 = x2;
			   f1 = f2;
		  }
		  else{
			   x0 = x2;
			   f0 = f2;
		  }
		  step = step + 1;
	 }while(fabs(f2)>e);
	 printf("\nThe required root is: %f", x2);
	 return 0;
}

