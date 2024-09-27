#include<stdio.h>
#include<math.h>
int main()
{
	int n,i,j;
	printf("enter the size of the array:");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		int j;
		printf("enter %dth index element:");
		scanf("%d",&j);
		a[i] = j;
	}
	int smallest = a[0];
    int ssmallest = pow(10,6);
	for(i=0;i<n;i++)
	{
		if(a[i]<smallest) {
			ssmallest = smallest;
			smallest = a[i];}
		else if(a[i] != smallest && a[i]<ssmallest) ssmallest = a[i];
		
		
	}
	printf("%d\n%d ",smallest,ssmallest);
}
