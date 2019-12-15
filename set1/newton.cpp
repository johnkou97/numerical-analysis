#include <stdio.h>
#include <math.h>
#include <cmath>

int main(){
	double x=1; /* give the first value  ( 1 , 5.5 , 6.5 , 5.97 (for b) )*/
	int i;
        
    for(i = 0; i < 20; i++)
     {
	 	
	  printf("%d\t%.12f\n",i,x);
	
	  x=x-(cos(x)-0.026*pow(x,2))/(-sin(x)-0.052*x);
      
    }  
	printf("%d\t%.12f\n",i,x);
	return 0;
	}
