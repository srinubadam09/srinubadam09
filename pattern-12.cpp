#include<stdio.h>
int main (){
	int n;
	printf("enter a number:");
	scanf("%d",&n);
    int spaces = 2*(n-1);
	for(int i=1;i<=n;i++){
	 for( int j=1;j<=i;j++){
        printf("%d",j);
    }
     for(int j=1;j<=spaces;j++){
     	printf(" ");
	 }
	 for(int j=i;j>0;j--){
        printf("%d",j);
    }

		printf("\n");
		spaces -= 2;
}
 
}
