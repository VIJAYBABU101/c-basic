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
	{
		scanf("%d",&k);
        int count=0;
		for (i=0;i<n;i++)
		{
			if(arr[i]==k)
			count++;
	    }           
		if(count>0)
		printf("%d",count);
		else
		printf("Not Found");  
	}
}
