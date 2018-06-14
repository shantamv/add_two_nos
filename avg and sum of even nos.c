#include<stdio.h>
int main()
{
	int n,i,sum=0;
	float avg; 
	printf("enter a no to find the sum of even nos and average");
	scanf("%d",&n);
	for (i=0;i<=n;i++)
	if(n%2==0)
		sum+=i;
	avg=sum/n;
	printf("sum is =%d",sum);
	printf("avg is =%f",avg);
	return 0;	
}
