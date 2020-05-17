#include<iostream>
using namespace std;
int main()
{
	int a,b,counter=0;
	cin >> a;
	cin >> b;
	for(int i=0;i<2;i++)
	{
		if(a>b)
	{
		counter+=a;
		a--;
	}
	else if(a<b)
	{
		counter+=b;
		b--;
	}
	else if(a==b)
	{
		counter+=a;
	}
	}
	cout << counter << endl;
	
}
