#include <stdio.h>
#include <math.h>
#include <cmath>

double g(double x){
	return acos(0.026*pow(x,2.0));
}

int main(){
	double x=1  ;
	int i;

    for(i = 0; i < 20; i++)
     {
	 	
	  printf("%d\t%.12f\n",i,x);
	
	  x= g(x);

    }  
	printf("%d\t%.12f\n",i,x);
	return 0;
	}
