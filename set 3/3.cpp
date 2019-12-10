#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <cmath>

int main(){
	int i;
	double Inte=0,h,x=0,n;
	n=99;  /*set number of points*/
	h=(2*3.14159265)/(n+1);
	
	for(i==0;i<n+2;i++)
	{
		if (x==0 or x==3)
		{
		   Inte=Inte+(h/3)*(pow(2.71828183,-x/4)* sin( 20*x));
	    }
		else if(i%2==0)
		{
		   Inte=Inte+2*(h/3)*(pow(2.71828183,-x/4)* sin( 20*x));
	    }
		else
		{
		   Inte=Inte+4*(h/3)*(pow(2.71828183,-x/4)* sin( 20*x));
	    }
	 
	x=x+h   ;
	
	}
	printf("%.12f\t",Inte);
	
	return 0;
}
