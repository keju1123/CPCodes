#include<iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;
	for(int zz = 0;zz<t;zz++)
	{
		int n,total=0,hasil=0;
		cin >> n;
		total = n*(1+n)/2;
		for(int i=0;i<n;i++)
		{
			int y;
			cin >> y;
			hasil += y;
		}
		cout << total-hasil << endl;
	}
}
