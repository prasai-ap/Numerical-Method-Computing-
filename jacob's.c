#include<stdio.h>
#include<math.h>
#define f(x,y,z) (17-y+(2*z))/20
#define g(x,y,z) (18-(3*x)+z)/20
#define h(x,y,z) (25-(2*x)+(3*y))/20
void main(){
	int i=1;
	float x,y,z,e,e1,e2,e3,f,g,h;
	printf("\n Enter the guesses");
	scanf("%f%f%f",&x,&y,&z);
	printf("\nenter error");
	scanf("%f",&e);
	printf("\nIteration\tx\ty\tz");
	do{
		printf("\n%d\t%f\t%f\t%f",i,x,y,z);
		f=f(x,y,z);
		g=g(x,y,z);
		h=h(x,y),z;
		e1=fabs(x-f);
		e2=fabs(y-g);
		e3=fabs(z-h);
		x=f;
		y=g;
		z=h;
		i=i+1;
	}while(e1>e&&e2>=e&&e3>=e);
	printf("\nvalues are\nx\t%f\ny\t%f\nz\t%f",x,y,z);
	
}
