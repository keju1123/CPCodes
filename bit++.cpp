#include<iostream>
using namespace std;

int main()
{
	int a;
	a=0;
	int n;
	cin >> n;
	for(int i=0;i<n;i++)
	{
		string s;
		cin>> s;
		if(s[1]=='+')
		{
			a++;
		}
		else if(s[1]=='-'){
			a--;
		}
	}
	cout << a << endl;
}
