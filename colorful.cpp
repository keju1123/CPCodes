#include<iostream>
using namespace std;

int main()
{
	int counter=0;
	string s;
	cin >> s;
	char arr0[1000010];
	char arr1[1000010];
	for(int i=0;i<1000010;i++)
	{
		if(i%2==0)
		{
			arr0[i]='0';
		}
		else
		{
			arr0[i]='1';
		}
	}
	
	for(int i=1;i<1000010;i++)
	{
		if(i%2==0)
		{
			arr1[i-1]='0';
		}
		else
		{
			arr1[i-1]='1';
		}
	}
	bool nol=false;
	if(s[0]=='0')
	{
		nol = true;
	}
	else
	{
		nol=false;
	}
	if(nol==true)
	{
		for(int i=0;i<s.length();i++)
		{
			if(s[i]!=arr0[i])
			{
				counter++;
			}
		}
	}
	else
	{
		for(int i=0;i<s.length();i++)
		{
			if(s[i]!=arr1[i])
			{
				counter++;
			}
		}
	}
	cout << counter << endl;
	
	
}
