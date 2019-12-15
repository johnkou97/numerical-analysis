#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <cmath>

int main(){
	int i;
	double Inte=0,h,x=0,n;
	n=31;  /*set number of points*/
	h=3/(n+1);
	
	for(i=0;i<n+2;i++)
	{
		if (x==0 or x==3)
		{
		   Inte=Inte+(h/3)*(1/(5*pow(x,2)+1));
	    }
		else if(i%2==0)
		{
		   Inte=Inte+2*(h/3)*(1/(5*pow(x,2)+1));
	    }
		else
		{
		   Inte=Inte+4*(h/3)*(1/(5*pow(x,2)+1));
	    }
	 
	x=x+h   ;
	
	}
	printf("%.12f\t\n",Inte);
	
	return 0;
}
