#include <stdio.h>
#include <math.h>
#include <cmath>
double f(double x, double y){
	-2*pow(x,3)+3*pow(y,2)+42;
}
double fx(double x, double y){
	-6*pow(x,2);
}
double fy(double x, double y){
	+6*y;
}
double g(double x, double y){
	5*pow(x,2)+3*pow(y,3)-69;
}
double gx(double x, double y){
	10*x;
}
double gy(double x, double y){
	+9*pow(y,2);
}
int main(){
	double x=5 ,y=5  ;
	int i;
    printf("i\t\tx\t\ty\n") ; 
    for(i = 0; i < 30; i++){
	 	
	  printf("%d\t%.12f\t%.12f\n",i,x,y);
	
	  x= x-(f(x,y)*gy(x,y)-g(x,y)*fy(x,y))/(fx(x,y)*gy(x,y)-gx(x,y)*fx(x,y));
	  
      y= y-(g(x,y)*fy(x,y)-f(x,y)*gy(x,y))/(fx(x,y)*gy(x,y)-gx(x,y)*fx(x,y));
    }  
	printf("%d\t%.12f\t%.12f\n",i,x,y);
	return 0;
}

