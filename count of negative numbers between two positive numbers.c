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
    int cnt=0;
    for(i=1;i<n-1;i++)
    {
    	if(arr[i]<0 && arr[i-1]>0 && arr[i+1]>0)
    	{
    		cnt++;
	    }
	}
	printf("%d",cnt);
}
