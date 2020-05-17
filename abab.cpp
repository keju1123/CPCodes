#include<iostream>
using namespace std;

char notter(char a)
{
	if(a=='a')
	{
		return 'b';
	}
	else
	{
		return 'a';
	}
}
int main()
{
	int n,counter=0;
	cin >> n;
	string a;
	cin >> a;
	for(int i=0;i<n;i+=2)
	{
		if(a[i]==a[i+1])
		{
			a[i+1] = notter(a[i+1]);
			counter++;
		}
	}
	cout << counter << endl << a << endl;
}
