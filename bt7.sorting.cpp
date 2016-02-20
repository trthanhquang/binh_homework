#include<iostream>
using namespace std;
int main ()
{
	int n;
	cout<<"how many elements do you want to have in group"<<endl; 
	cin>>n;
	int array[n];
	for(int i=0;i<n;i++)
	{
	         int x;
	         cin>>x;
	         array[i]=x;
	}
	int vitri;
	int min=array[0];
	for(int i=0;i<n;i++)
	{vitri=i;
	
	for(int j=i+1;j<n;j ++)
	{       
		if(array[j]<array[vitri])
		{
			min=array[j];
			vitri=j;
		}
	}
	cout<<"VT :"<<vitri<<endl;
	cout<<"MIN :"<<min<<endl;
	if(vitri != i)
	{
	int temp=array[vitri];
	array[vitri]=array[i];
	array[i]=temp;}
	for(int i=0;i<10;i++)
	cout<<array[i]<<" ";
	cout<<endl;
}
}
