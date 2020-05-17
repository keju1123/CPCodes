#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int max;
	bool yes=true;
	long long arr[n+10];
	for(int i=0;i<n;i++)
	{
		cin >> arr[i];
	}
	for(int i=n-1;i>=0;i--)
	{
		if(arr[i]>=arr[i-1]||arr[i]<=arr[i-1]-1)
		{
			arr[i-1]-=1;
			cout << "disini" << i << endl;
		}
		else
		{
			yes = false;
			cout << "No"<< endl;
			break;
			
		}
	}
	if(yes==true)
	{
		cout << "Yes"<< endl;
	}
	
}
