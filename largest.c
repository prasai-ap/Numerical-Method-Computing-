#include<stdio.h>
void main(){
 float a[100],l;
 int i,j,n;
 printf("\nEnter total umbers you want");
 scanf("%d",&n);
 for(i=0;i<n;i++){
 	printf("\nenter value of array a%d",i);
	 scanf("%f",&a[i]);
 }
 for(i=0;i<n;i++){
 	for(j=i+1;j<n;j++){
 			if (a[i]>a[j]){
			 	l=a[i];
			 	a[i]=a[j];
			 	a[j]=l;
			}
	}
 }
 printf("\n In ascending order is");
 for(i=0;i<n;i++){
 	printf("%f\t",a[i]);
 }
}
