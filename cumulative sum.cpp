#include<iostream>
using namespace std;

int main()
{
	int n,query,a,b;
	cin >> n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin >> arr[i];
	}
	cin >> query;
	for(int i=0;i<query;i++)
	{
		int sum=0;
		cin >> a;
		cin >> b;
		for(int j=a;j<=b;j++)
		{
			sum=sum+arr[j];
		}
		cout << sum << endl;
	}
}
