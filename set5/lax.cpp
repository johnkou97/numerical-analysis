#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <cmath>
#define S 200                             /* Set the size of the matrix  */
#define Pi 3.14149265

int main(){
	int i,j,k;
	double A[S][S],x,t;
	FILE * pFile;                                            /* the file "wave.txt" is used to extract the data  */
	pFile= fopen("wave.txt","w");
	
	
	for(i=0;i<S;i++)
	{
		for(j=0;j<S;j++)
		{
			A[i][j]=0;
		}
	}
	
	for(i=0;i<S;i++)
	{
		A[i][0]=0;
		A[i][S-1]=0;	
        
		x= 12*double(i)/S;
        if(x<2)
		{
	    	A[0][i]=0;	
	    }
	    else if(x>4)
	    {
	    	A[0][i]=0;
		}
		else
		{
			A[0][i]= sin(Pi*x);
		}
	}
	for(k=0;k<10000;k++)
	{	
        for(i=1;i<S-1;i++)
        {
    	    for(j=1;j<S;j++)
    	    {
    		A[j][i]=.75*A[j-1][i]+.375*A[j-1][i-1]-.125*A[j-1][i+1];
		    }
	    }
    }



	
	for(i=0;i<S;i++)
	{
		t=double(i)*5/(S-1);
		printf("t=%f Pi\t",t);
	
		
		for(j=0;j<S;j++)
		{
			printf("%.3f\t",A[i][j]);
			fprintf(pFile,"%.3f\t",A[i][j]);
		}

    	printf("\n\n");
    	fprintf(pFile,"\n");
		
    } 
	
	
	
	
	
	return 0;
}
