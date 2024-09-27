#include<stdio.h>
int main ()
{
	int i,j,n;
	printf("enter the size of array:");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		int j;
		printf("enter a number %d ",i);
		scanf("%d",&j);
		a[i] = j;
	}
	    int max=a[0];
	    for(i=0;i<n;i++)
	    {
	    	if(a[i]>max)  max=a[i];
		}
		printf("%d\n",max);
		
		int min = a[0];
		for(i=0;i<n;i++)
		{
			if(a[i]<min) min = a[i];
		}
		printf("%d",min);
}
