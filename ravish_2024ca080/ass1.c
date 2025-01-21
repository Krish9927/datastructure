#include<stdio.h>
int main(){
	int arr[100][100];
	int num[100];
	int i,j,sum=0,sum1=0,sum2=0;
	int n,m,k=0;
	printf("\nEnter the value of N : ");
	scanf("%d",&n);
	printf("\nEnter the value of M : ");
	scanf("%d",&m);
	printf("\nENter the element of Matrix : ");
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	for(i=0;i<n;i++){
	sum=0;
	sum1=0;
		for(j=0;j<m;j++){
			sum+=arr[i][j];
			sum1+=arr[j][i];
			if(i==j)
				sum2+=arr[i][j];
			
		}
		printf(" %d",sum);
			printf(" %d",sum1);
		num[k]=sum;
		k++;
		num[k]=sum1;
	}
	printf(" %d",sum2);
	num[k]=sum2;
	for(i=0;i<k;i++)
	{
		if(num[0]==num[i])
			continue;
		else{
			printf("\nThis is not magioc square.");
			return 0;
		}
	}
	printf("\nThis is magic square.");
	return 0;
}
