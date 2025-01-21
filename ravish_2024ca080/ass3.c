#include<stdio.h>
void add(int a,int b){
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\nValue After swaping by Addition-Subtraction: ");
	printf("\nA=%d\nB=%d",a,b);
}
void multy(int a,int b){
	a=a*b;
	b=a/b;
	a=a/b;
	printf("\nValue After swaping by Multiplication-Division : ");
	printf("\nA=%d\nB=%d",a,b);
}
void bitwise(int a,int b){
	a=a^b;
	b=a^b;
	a=a^b;
	printf("\nValue After swaping by Bitwise : ");
	printf("\nA=%d\nB=%d",a,b);
}
int main(){
	int a=30,b=50;
	printf("\nValue before swaping : ");
	printf("\nA=%d\nB=%d",a,b);
	add(a,b);
	multy(a,b);
	bitwise(a,b);
	return 0;
}
