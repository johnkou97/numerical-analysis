#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <cmath>

int main(){
	int i ;
	double x=0 , y=1 , z=0 , y2=-16 , k11=0 , k12=0 , k21=0 , k22=0 ,k31,k32,k41,k42 ,h=0.1;  /* set parameter h for step*/
	FILE * pFile;
	pFile= fopen("RK4.txt","w");
	
	
	for (i==0;i<60;i++)
	{
		x=x+h;
		k11=-16*y*h;
		k12=z*h;
		k21=-16*(y+k11/2)*h;
		k22=(z+k12/2)*h;
		k31=-16*(y+k21/2)*h;
		k32=(z+k22/2)*h;
		k41=-16*(y+k31)*h;
		k42=(z+k32)*h;
		z=z+(k11+2*k21+2*k31+k41)/6;
		y=y+(k12+2*k22+2*k32+k42)/6;
		printf("%f\t%.12f\n",x,y);
		fprintf(pFile,"%f\t%.12f\n",x,y);
	}
    fclose(pFile);  /*file RK4 is used to extract data for the plot*/




return 0;
}
