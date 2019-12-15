#include <stdio.h>
#include <math.h>
#include <cmath>

int main(){
	double x ,y  ;
	int i;
    x=6.5;
    
    for(i = 0; i < 40; i++)
     {
	 	
	  printf("%d\t%.12f\n",i,x);
	
	  x= (cos(x))/(0.026*x);

    }  
	printf("%d\t%.12f\n",i,x);
	return 0;
	}
	
