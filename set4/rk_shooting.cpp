#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <cmath>

int main(){
	int i ;
	double x=0.1 , y=1 , z=0 , y2=-16 , k1=0 , k2=0 , k21=0 , k22=0 , h=0.02,l;
	
	
	for (i=0;i<500;i++)
	{
		x=x+h;
			if (x>1.1)
		{
		 break;
	    }
	
		k1=-(10*pow(y,2))/x;
		k2=-(10*pow(y+k1,2))/(x+h);
		
		y=y+(k1+k2)/2;
		printf("%f\t%f\n",x,y);
		
	}





return 0;
}
