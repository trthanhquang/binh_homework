#include<stdio.h>
int main ()
{
	int n;
	printf("how many element do you want to have in group?\n");
	scanf("%d",&n);
	int array1[n];
	int array2[100];
	int array3[100];
	int m=0;
	int k=0;
	for(int i=0;i<n;i++)
	{
		int x;
		printf("enter a number?\n");
		scanf("%d",&x);
		array1[i]=x;
	}
	int max1=0;
	int vitri1=0;
	int max2=0;
	int max3=0;
	int vitri2=0;
	for(int i=0;i<n;i++)
	{
		if(array1[i]>max1)
		{
			max1=array1[i];
			vitri1=i;
		}
	}
	for(int i=0;i<n;i++)
	{
		if(i!=vitri1)
		{
			array2[m]=array1[i];
			m++;
		}
	}
	for(int i=0;i<m;i++)array1[i]=array2[i];
	for(int i=0;i<m;i++)
	{
		if(array2[i]>max2)
		{max2=array2[i];
		vitri2=i;
		}
	}
	for(int i=0;i<m;i++)
	{
		if(i!=vitri2)
		{
			array3[k]=array2[i];
			k++;
		}
	}
	for(int i=0;i<k;i++)array2[i]=array3[i];
	for(int i=0;i<k;i++)
	{
		if(array3[i]>max3)
		{max3=array3[i];
		}
	}
	
	printf("%d %d %d",max1,max2,max3);
		
}
