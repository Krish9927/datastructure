#include <stdio.h>
void addition(int x,int y){
x=x+y;
y=x-y;
x=x-y;
printf(" swapped with addition substraction\n");
printf("a= %d b=%d \n",x,y);
}
void multiplication(int x,int y){
x=x*y;
y=x/y;
x=x/y;
printf(" swapped  multiplication division\n");
printf("a= %d b=%d \n",x,y);

}
void bitwise(int x,int y){
x=x^y;
y=x^y;
x=x^y;
printf(" swapped  bitwise\n");
printf("a= %d b=%d \n",x,y);
}
int main(){
int a,b;
printf("enter two number to swap\n");
scanf("%d%d",&a,&b);
printf("without swapped \n");
printf("a= %d b=%d \n",a,b);
addition(a,b);
multiplication(a,b);
bitwise(a,b);

return 0;
}
