#include<stdio.h>
// parameters for print unique elements
 void unique(int ,int a[]);
 
 int main(){
 	int n,i;
 	// input for size of array
 	printf("Enter the size of array:");
 	scanf("%d",&n);
	
		int a[n];
		
     // input for array
      	for( i=0;i<n;i++){
		  int j;
	      printf("enter a number:");
	      scanf("%d",&j);
	      a[i]=j;
	  } 
	// calling the unique function
	  unique(n,a);	
 }
 
 // unique function
 void unique(int n , int a[]){
 	int i,j,count=0,main_count=0;
 	
 	for( i=0;i<n;i++){
 		for(j=0;j<n;j++){
 			if (a[i] == a[j]) count += 1;
		 }
	    
	    if(count<2) 
		  {
		  	printf("the unique elements are :");
			printf("%d ",a[i]);
			printf(" \n");
			main_count += 1;
		}
		count =0;
	 }
	 printf("number of unique elements are in the given array is :  ");
	 printf("%d",main_count);
 }
