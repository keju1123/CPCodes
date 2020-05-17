#include<iostream>
#include<cmath>
using namespace std;

int main ()
{
	int n;
	cin >> n;
	int l;
	cin >> l;
	int arr[n+10];
	int sum=0,min=999999999,jawab=0;
	int sum2[n+10];
	for(int i=1;i<=n;i++)
	{
		arr[i]= l + i -1;
		sum += arr[i];
	}
	for(int i=1;i<=n;i++)
	{
		sum2[i]=sum - arr[i];
		if(abs(sum2[i]-sum) <= min)
		{
			min = sum2[i]-sum; 	
			jawab = sum2[i];
		}	
	}
	cout << jawab << endl;
	
}
