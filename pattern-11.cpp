#include<stdio.h>
int main (){
	int i,j,n,starts;
	printf("enter a number:");
	scanf("%d",&n);

	for(i=0;i<n;i++){
	if(i%2==0) starts=1;
	else starts=0;
	 for(j=0;j<=i;j++){
			printf("%d",starts);
			starts = 1-starts;
		}

		printf("\n");
	}
}
