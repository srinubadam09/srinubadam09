#include<stdio.h>
int main (){
	int i,j,n,stars;
	printf("enter a number:");
	scanf("%d",&n);
	for(i=0;i<=2*n-1;i++){
		stars=i;
		if(i>n) stars = 2*n-i;
		for(j=0;j<stars;j++){
			printf("*");
		}

		printf("\n");
	}
}
