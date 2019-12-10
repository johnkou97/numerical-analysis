#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
	double x1=1,y1=1,z1=1,x2,y2,z2;
	int i;
	printf("%d\t%.12f\t%.12f\t%.12f\n",0,x1,y1,z1);
	for(i=0;i<100;i++)
	{
		x2=(24-3*y1)/4;
		y2=(30-3*x2+z1)/4;
		z2=(-24+y2)/4;
		printf("%d\t%.12f\t%.12f\t%.12f\n",i+1,x2,y2,z2);
		if(x2-x1<0.0000000000009 and x2-x1>-0.0000000000009)           /* we can change the preferd accuracy */
		{
			if(y2-y1<0.0000000000009 and y2-y1>-0.0000000000009)
			{
			    if(z2-z1<0.0000000000009 and z2-z1>-0.0000000000009)
				  break;
		    }
	    }
		x1=x2;
		y1=y2;
		z1=z2;
	}
	return 0;
}
