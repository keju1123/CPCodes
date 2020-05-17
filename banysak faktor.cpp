#include<iostream>
using namespace std;

int main()
{
	int a,b,c;
	int sum=0;
	cin >> a;
	cin >> b; 
	cin >> c;
	for(int i=a;i<=b;i++)
	{
		if(c%i==0)
		{
			sum ++;
		}
	}
	cout << sum << endl;
}
