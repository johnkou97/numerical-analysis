#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <cmath>

int main(){
	int i ;
	double x=0 , y=1 , z=0 , y2=-16 , k11=0 , k12=0 , k21=0 , k22=0 , h=0.1; /* set parameter h for step*/
    FILE * pFile;
	pFile= fopen("RK2.txt","w");
	
	printf("  x\t\t\ty\n");
	for (i==0;i<600;i++)
	{
		x=x+h;
		if(x>6)
		{
			break;
		}
		k11=-16*y*h;
		k12=z*h;
		k21=-16*(y+k11)*h;
		k22=(z+k12)*h;
		z=z+(k11+k21)/2;
		y=y+(k12+k22)/2;
		printf("%f\t%.12f\n",x,y);
		fprintf(pFile," %f\t%.12f\n",x,y);
		
	}
    fclose(pFile);  /*file RK2 is used to extract data for the plot*/




return 0;
}
