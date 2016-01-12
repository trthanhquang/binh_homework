#include<stdio.h>
int main()
{
	int n;
	printf("how many element do you want to have?");
	scanf("%d",&n);
	int array[n];
	for(int i=0;i<n;i++)
	{
		int x;
		printf("enter a number?");
		scanf("%d",&x);
		array[i]=x;
	}
	int maximum1=array[0];
	int maximum2=array[1];
	for(int i=0;i<n;i++)
	{
		if(array[i]>maximum1)
		{maximum1=array[i];
		}
	}
	for(int i=0;i<n;i++)
	{
		if((array[i]!=maximum1)&&(array[i]>maximum2))
		{
			maximum2=array[i];
		}
	}
	
	
	
	
	
	
	printf("Max1 number is %d\n",maximum1);
	printf("Max2 number is %d\n",maximum2);
	return 0;
}
