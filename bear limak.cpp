#include<iostream>
using namespace std;

int main()
{
	long long a,b;
	cin >> a;
	cin >> b;

	for(int i=0;i<=7;i++)
	{
		if(a>b)
		{
			cout << i << endl;
			break;
		}
		else
		{
			a=a*3;
			b=b*2;
		}
	}
}