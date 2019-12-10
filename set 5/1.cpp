#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <cmath>
#define S 200                                            /* Set the size of the matrix  */
#define E 2.71828183

int main(){
	
	int i,j,k;
	double x,y,A[S][S],b,t,tol;
	FILE * pFile;                                            /* the file "matrix.txt" is used to extract the data  */
	pFile= fopen("matrix.txt","w");
	
	
	
	
	for(i=0;i<S;i++)
	{
		for(j=0;j<S;j++)
		{
	
		  A[i][j]=1.0;
        }
	}
	
	

    for(k=0;k<10000;k++)
	{
	
	   for(i=1;i<S-1;i++)
	   {
	     	for(j=1;j<S-1;j++)
	       {
                x=.1*double(j)/(S-1);		
		        y=.1*double(i)/(S-1);
		    
			    b=(A[i][j-1]+A[i][j+1]+A[i-1][j]+A[i+1][j]-pow((.1/(S-1)),2)*10*pow(E,(-.5*pow(pow((x-.5),2)+pow((y-.5),2),.5))))/4;
			    if(b>A[i][j])
			    {
			    	t+=b-A[i][j];
				}
				else
				{
					t+=A[i][j]-b;
				}
			    A[i][j]=b;
			    
		    }
	    }
	    tol=t/(pow((S-2),2));
	    if(tol<.0000001)
		{
	    	break;
		}
		t=0;
    }
	
	printf("%d\t%.12f\n",k,tol);
    for(i=0;i<S;i++)
	{
		y=.1*double(i)/(S-1);
		printf("y=%.4f\t",y);
		for(j=0;j<S;j++)
		{
			printf("%.10f\t",A[i][j]);
			fprintf(pFile,"%.10f\t",A[i][j]);
		}

    	printf("\n\n");
    	fprintf(pFile,"\n");
    	
		
    } 
	
	
	
	
	return 0;
}
