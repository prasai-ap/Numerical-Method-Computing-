#include<stdio.h>
#include<math.h>
#define f(x) pow(x,3)+(3*x)+2
void main(){
	int n,x[10],t,i,j,y[10];
	float g=1,h=0;
	printf("\nEnter no of coefficient of x");
	scanf("%d",&n);
	printf("\nEnter the coefficient of x");
	for(i=0;i<3;i++){
		printf("\nEnter x[i]=",i);
		scanf("%d",&x[i]);
		printf("\nEnter y[i]=",i);
		scanf("%d",y[i]);
	}
	printf("\nEnter the required value of x polynomial");
	scanf("%d",&t);
	for(i=0;i<n;i++){
		for(j=1;j<=n;j++)
		  {
			   if(i!=j)
			   {
			    	 g= g*(t - x[j])/(x[i] - x[j]);
			   }
		  }
		  h= h+g*y[i];
	 }
	printf("Interplotation points are %0.3f%%0.3f",g,h);
	}		
	

