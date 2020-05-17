#include<iostream>
using namespace std;

long long cnt = 0;
long long cycleLengthter(long long a)
{
	if (a==1) return cnt;
	if(a%2)
	{
		cnt++;
		cycleLengthter(3*a+1);
	}
	else
	{
		cnt++;
		cycleLengthter(a/2);
	}
}

int main()
{
	while(cin)
	{

		long long max=0;
		long long a,b;
		cin >> a >> b;
		long long c[100000];
		for(long long i=0;i<b;i++)
		{
			c[i]=0;
		}
		for(long long i=a;i<=b;i++)
		{
			c[i] = cycleLengthter(i);
			cnt =0;
		}

		for(long long i=0;i<b;i++)
		{
			if(c[i] > max)
			{
				max = c[i];
			}
		}
		cout << a << ' ' << b << ' ' << max+1 << endl;
	}	
}
