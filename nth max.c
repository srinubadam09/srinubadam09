#include<stdio.h>
 // parameter of nth_max
 void nth_max(int ,int, int []);
 
int main(){
	int n,i,j,max;
	// input for array size
	printf("enter the size of the of the array");
	scanf("%d",&n);
	
	// input for array size
	printf("enter tht nth max ex(2nd max): ");
	scanf("%d",&max);
	
		int a[n];
		
     // input for array
      	for( i=0;i<n;i++){
		  int j;
	      printf("enter a number:");
	      scanf("%d",&j);
	      a[i]=j;
	  }
	    nth_max(n,max,a);
	}
	
	void nth_max(int n,int k,int a[]){
	 int i,j,temp;
	// sort the given array
	for(i=0;i<n-1;i++){
		int mini = i;
		for(j=i;j<=n-1;j++){
			if(a[j]<a[mini]) mini = j;
		}
	 // swap 
	         temp = a[mini];
			  a[mini] = a[i];
			  a[i] = temp;
     }

	if(k<n) printf(" %d",a[n-k]);
	else printf("error size of array is exceeded...");	
}
