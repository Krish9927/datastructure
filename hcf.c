#include <stdio.h>
int hcf(int x,int y){
if(y==0)
return x;
return hcf(y,x%y);
}
int main(){
int a,b;
printf("enter two number a,b for hcf \n");
scanf("%d%d",&a,&b);
int c=hcf(a,b);
printf("hcf =%d\n",c);
return 0;
}
