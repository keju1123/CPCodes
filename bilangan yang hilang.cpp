#include<iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int arr[n];
	for(int i=1;i<=n-1;i++)
	{
		cin >> arr[i];
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(arr[i]>arr[j])
			{
				arr[i]=arr[i]+arr[j];
				arr[j]=arr[i]-arr[j];
				arr[i]=arr[i]-arr[j];
			}
		}
	}
	for(int i=1;i<=n;i++)
	{
		if(arr[i]==i)
		{
			continue;
		}
		else
		{
			cout<<i<<endl;
			break;
		}
	}
}
