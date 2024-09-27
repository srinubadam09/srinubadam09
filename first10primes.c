#include<stdio.h>
int main(){
	int n,p=2,i;
	printf("how many prime numbers you want?");
	scanf("%d",&n);
	printf("the prime numbers are;");
  while(n){
  
  for(i=2;i<p;i++){
  	if(p%i==0){
  		break;
	  }
  }
  if(i==p) 
  {printf("%d ",p);
  n--;
  }
  p++;
  }
  
  return 0;
  }
