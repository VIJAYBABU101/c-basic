#include<stdio.h>
int main()
{

int i, n, sum=0;
scanf("%d",&n);
for (i=1; i<=n; i++)
{
	if(n%i==0)
	{
		sum = sum+i;
	}
 }
 printf("%d\n", sum); 
  if(sum==n)
  {printf("the given number is perfect number");
}
else
{
	printf("the given number is not perfect");
}
  }
