#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	scanf("%d",&n);
	int t=n;
	int l=(int)log10(n)+1;
	int r,sum=0;
	while(t>0)
	{
	r=t%10;
	sum=sum+pow(r,l);
	t=t/10;	
	}
	if(sum == n)
	{
		printf("Armstrong Number");
	}
	else
	{
		printf("Not an Armstrong Number");
		
	}
}
