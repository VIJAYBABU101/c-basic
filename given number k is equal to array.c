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
	int k;
	scanf("%d",&k);
	int found=0;
	for(i=0;i<n;i++)
	{
		if(arr[i]==k)
		{
			found=1;
			break;
		}
	}
	if(found==1)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
}

