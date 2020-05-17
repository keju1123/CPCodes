#include<iostream>
using namespace std;

int main()
{
	int a,uang,counter=0,temp=0;
	cin >> a;
	cin >> uang;
	int arr[a+10];
	for(int i=0;i<a;i++)
	{
		cin >> arr[i];
	}
	for(int i=0;i<a;i++)
	{
		for(int j=i;j<a;j++)
		{
			if(arr[i]>arr[j])
			{
				temp=arr[j];
				arr[j]=arr[i];
				arr[i]= temp;
			}
				
		}
	}
	for(int i=0;i<a;i++)
	{
		if(uang>=arr[i])
		{
			uang=uang-arr[i];
			counter++;
		}
		else
		{
			break;
		}
	}
	cout << counter << endl;
}
