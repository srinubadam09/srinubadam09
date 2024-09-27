#include<stdio.h>
// average of given array elements
 void average ( int n, int a[]);
int main(){
	int n,i,j;
	printf("Enter the size of array:");
	scanf("%d",&n);
		int a[n];
	for( i=0;i<n;i++){
		int j;
	  printf("enter a number:");
	    scanf("%d",&j);
	     a[i]=j;
	}
	average(n,a);
}
  void average ( int n , int a[]){
  	int sum=0,i;
  	for(i=0;i<n;i++){
  		sum += a[i];
	  }
	  printf("%d",sum/n);
  }
