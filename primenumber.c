#include<stdio.h>
int main()
{
	int i, n,found=0;
	scanf("%d",&n);
	for( i=2; i<=n/2; i++)
	{
	if(n%i==0)
	{
		found=1;
		break;
	}
 } 
  if(found==2)
  {
  printf("prime number");
  }
else
{
	printf("not a prime number");
}
  }
