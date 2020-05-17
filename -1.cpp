#include<iostream>
using namespace std;

long long main()
{
	long long a,sum=0;
	cin >> a;
	long long arr[a+10];
	for(long long i=0;i<a+10;i++)
	{
		arr[i]=0;
	}
	for(long long i=1;i<=a;i++)
	{
		cin >> arr[i];
	}
	for(long long i=1;i<=a;i++)
	{
		if(((arr[i]<=0)&& (arr[i]*-1>arr[i+1]))||(arr[i]<=0)&&(arr[i+1]<0))
		{
			arr[i]=arr[i]*-1;
			arr[i+1]=arr[i+1]*-1;
			i=1;
		}
		if(arr[i]>0&&((arr[i+1]*-1)>arr[i]))
		{
			arr[i]=arr[i]*-1;
			arr[i+1]=arr[i+1]*-1;
			i=1;
		}
	}
	for(long long i=1;i<=a;i++)
	{
		sum+=arr[i];
	}
	cout << sum << endl;
}
