#include<iostream>
#define f(n) for(int i=0;i<n;i++)
using namespace std;

int main()
{
	int a,i;
	cin >> a;
	int arr[a+10];
	f(a);
	{
		cin >> arr[i];
	}
	for(int i=a-1;i>=0;i--)
	{
		cout << arr[i]<< ' ';
	}
}
