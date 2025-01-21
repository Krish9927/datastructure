#include <stdio.h>
int factorial(int a){
if(a==1){
return 1;
}
return a*factorial(a-1);
}
int fibonacci(int n){
if(n==1||n==0)
return 1;
return (fibonacci(n-1)+fibonacci(n-2));
}
int main(){
printf("enter number to find factorial and fibonacci\n");
int n,i=0;
scanf("%d",&n);
printf("factorial\n");
int a=factorial(n);
printf("%d",a);
printf("fibonacci series\n ");
for(i=0;i<n;i++){
printf("%d ",fibonacci(i));
}
return 0;
}
