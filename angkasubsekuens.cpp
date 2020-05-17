#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int a,counter=0,c2=0;
	cin >> a;
	int arr[a+10];
	for(int i=0;i<a;i++)
	{
		cin >> arr[i];
	}
	for(int i=1;i<a;i++)
	{
		if(arr[i]!=arr[i-1])
		{
			counter++;
			if(counter==2)
			{
				arr[i]=0;
			}
		}
	}
	for(int i=0;i<a;i++)
	{
		cout << arr[i]<< ' ';
		if(arr[i]!=0)
		{
			c2++;
		}
	}
	cout <<endl<< c2 << endl;
	
}
