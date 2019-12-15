#include <stdio.h>
#include <math.h>
#include <cmath>
double g(double x){
	return pow( cos(x)/0.026 , 0.5);
}
int main(){
	double x=6.5  ;
	int i;
    
    for(i = 0; i < 30; i++)
     {
	 	
	  printf("%d\t%.12f\n",i,x);
	
	  x= g(x);

    }  
	printf("%d\t%.12f\n",i,x);
	return 0;
	}
	
