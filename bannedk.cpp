#include<iostream>
#include<cmath>
#include<iomanip>
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,b;
	cin >> n;
	int arr[n+1];
	memset(arr,0,sizeof(arr));
	for(int i=1;i<=n;i++)
	{
		cin >> b;
		for(int j=1;j<=n;j++)
		{
			if(b==j)
			{
				arr[j]+=1;
			}
		}
	}
	int sum =0;
	for(int i=1;i<=n;i++)
	{
		arr[i]--;
		for(int j=1;j<=n;j++)
		{
			sum += (arr[j]*(arr[j]-1)/2);
		}
		arr[i]++;
		cout << sum << endl;
		sum = 0;
	}
	
}
