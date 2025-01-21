#include <stdio.h>
int main(){
int n;
printf("enter number to matrix n*n");
scanf("%d",&n);
//int arr[][]={{4,9,2},{3,5,7},{8,1,6}};
int row[100]={0},col[100]={0},arr[100][100],sum=0,i=0,j=0;
for( i=0;i<n;i++){
for(j=0;j<n;j++){
scanf("%d",&arr[i][j]);
}
}
for(i=0;i<n;i++){
for(j=0;j<n;j++){
row[i]+=arr[i][j];
col[i]+=arr[j][i];
if(i==j){
sum+=arr[i][j];
}
}
}
for(i=0;i<n;i++){
if(row[i]==col[i] && col[i]==sum){
continue;
}
else{
printf("it is not a  maigic square");
return 0;
}
}
printf("it is a magic square");
return 0;
}


