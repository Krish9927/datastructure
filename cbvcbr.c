#include <stdio.h>
void callbyvalue(int a){
a=a+20;
printf("call by value %d \n",a);
}
void callbyrefernce(int *b){
*b=*b+20;
printf("call by refence %d \n",*b);
}
int main(){
int x=12,y=21;
callbyvalue(x);
callbyrefernce(&y);
printf("in main call by value %d \n",x);
printf("in main call by refernce %d \n",y);
return 0;
}
