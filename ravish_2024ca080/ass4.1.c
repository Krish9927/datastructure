#include<stdio.h>
int multy=1;
int fact(int x){
	
	if(x==0)
		return multy;
	else
	{
		multy*=x;
		x=x-1;
		fact(x);
	}
}
int main(){
	int n;
	printf("\nEnter the value of N : ");
	scanf("%d",&n);
	printf("\nFactorial of %d=%d",n,fact(n));
	return 0;
}
