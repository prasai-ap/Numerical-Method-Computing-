#include<stdio.h>
void main(){
	int a[10][10],x[10],x_n[10];
	float l_o=1,l_n,e,temp;
	int n,i,j,s=1;
	printf("\n Enter the row of matrix");
	scanf("%d",&n);
	printf("\n Enter tolerable error");
	scanf("%f",&e);
	printf("\n Enter the element of matrix");
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
		printf("\na[%d][%d]=",i,j);
		scanf("%d",&a[i][j]);
		}
	}
	printf("\n Enter the guesses");
	for(i=1;i<=n;i++){
		printf("\n x[%d]=",i);
		scanf("%d",&x[i]);
	}
	up:
	 for(i=1;i<=n;i++)
	 {
		  for(j=1;j<=n;j++)
		  {
		   	temp = temp + a[i][j]*x[j];
		  }
		  x_n[i] = temp;
	 }
	 for(i=1;i<=n;i++)
	 {
	  	x[i] = x_n[i];
	 }
	 l_n = fabs(x[1]);
	 for(i=2;i<=n;i++)
	 {
		  if(fabs(x[i])>l_n)
		  {
		   	l_n = fabs(x[i]);
		  }
	 }
	 for(i=1;i<=n;i++)
	 {
	  	x[i] = x[i]/l_n;
	 }
	 printf("\n\nSTEP-%d:\n", s);
	 printf("Eigen Value = %f\n", l_n);
	 printf("Eigen Vector:\n");
	 for(i=1;i<=n;i++)
	 {
	  	printf("%f\t", x[i]);
	 }
	 
	 if(fabs(l_n-l_o)>=e)
	 {
		  l_o=l_n;
		  s++;
		  goto up;
	 }

}

