#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int arr[n];
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	int es=0,os=0;
	for(i=0;i<n;i++)
	{
		if(i%2==0)
		{
			es=es+arr[i];
		}
		else
		{
			os=os+arr[i];
		}
	}
	printf("%d %d",es,os);
}
