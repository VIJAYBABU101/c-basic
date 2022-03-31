#include<stdio.h>
int main()
{
	int n, r, sum=0;
	scanf("%d",&n);
	int a=n;
	int t=n*n;
	while(t>0)
	{
	r=t%10;
	sum=sum+r;
	t=t/10;
	}
	if(a==sum)
	{
	printf("Neon Number");
	}
	else
	{
	    printf("Not Neon Number");
	}
}
