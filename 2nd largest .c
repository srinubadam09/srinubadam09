#include<stdio.h>
int main(){
	int r,i,j,temp;
	int a[100];
	printf("enter size of an array:");
	scanf("%d",&r);

	for(i=0;i<r;i++){
		printf("enter an element:");
			scanf("%d",&a[i]);
	}
	   printf("Elements in array is:");
		for(i=0;i<r;i++){
		printf("%d ",a[i]);
		
	}
	printf("\n \n");
    for(i=0;i<r;i++){
    	for(j=i+1;j<r;j++)
    	if(a[j]<a[i]){
    		temp=a[i];
			a[i]=a[j];
			a[j]=temp;
    		
		}		
	}
	printf("second largest element in an array is%d %d",a[r-2]);
	
	
}
