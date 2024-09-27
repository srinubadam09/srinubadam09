#include<stdio.h>
#include<math.h>
int main(){
	int n,x=99,digit,arm,temp;
	printf("how many armstrong numbers you want?");
	scanf("%d",&n);
	printf("the armstrong numbers are:");
	while(n!=0){
		x++;
		temp=x;
		arm=0;
		while(x!=0){
			digit= x%10;
			arm=arm+digit*digit*digit
			;
			x=x/10;}
		}
		if(temp==arm){
		
		printf("%d\n",temp);
		n--;
	}
	x=temp;
	getchar();
return 0;
}
