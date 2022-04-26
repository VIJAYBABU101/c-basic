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
	int p=0,ne=0,z=0;
	for(i=0;i<n;i++)
	{
		if(arr[i]>0)
		{
			p++;
		}
		else if(arr[i]<0)
		{
			ne++;
		}
		else
		{
			z++;
		}
    }
	printf("%d %d %d",p,ne,z);
}
