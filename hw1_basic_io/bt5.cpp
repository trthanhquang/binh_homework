#include<stdio.h>
int main()
{
	int n;
	printf("how many elements do you want to have in group?\n");
	scanf("%d",&n);
	int array[n];
	for(int i=0;i<n;i++)
	{
		int x;
		printf("enter a number ?\n");
		scanf("%d",&x);
		array[i]=x;
	}
	int max_1=array[0];
	int max_2=array[0];
	int max_3=array[0];
	for(int i=0;i<n;i++)
	{
		if(array[i]>max_1)
		{max_1=array[i];
		}
	}
	for(int i=0;i<n;i++)
	{
	
		if((array[i]!=max_1)&&(array[i]>max_2))
		{max_2=array[i];
		}
	}
	for(int i=0;i<n;i++)
	{
	
		if((array[i]!=max_1)&&(array[i]!=max_2)&&(array[i]>max_3))
		{max_3=array[i];
		}
	}
		printf("Max1:%d Max2:%d Max3:%d",max_1,max_2,max_3);
		return 0;
		
	}



