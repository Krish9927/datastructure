#include<stdio.h>
void fun1(int a, int b){
	int temp=a;
	a=b;
	b=temp;
}
void fun2(int *a, int *b){
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
int main(){
	int a=10,b=20;
	printf("\nValue of a and b before swaping");
	printf("\nA : %d \nB : %d",a,b);
	fun1(a,b);//call by value.
	printf("\nValue of a and b before swaping by call by value.");
	printf("\nA : %d \nB : %d",a,b);
	fun2(&a,&b);
	printf("\nValue of a and b before swaping by call by refrance.");
	printf("\nA : %d \nB : %d",a,b);
	return 0;
}
