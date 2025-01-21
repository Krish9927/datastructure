#include<stdio.h>
void fibbo(int n,int a,int b,int c){
	if(n==0)
		return;
	else{
		printf(" %d",c);
		
		a=b;
		b=c;
		c=a+b;
		fibbo(n-1,a,b,c);
	}
}
int main(){
	int n,m,a=0,b=1,c=0;
	printf("\nEnter the value of N : ");
	scanf("%d",&n);
	
	printf("\nFibbonaci upto %d=",n);
	fibbo(n,a,b,c);
	return 0;
}

