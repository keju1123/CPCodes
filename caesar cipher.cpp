#include<iostream>
#include<string>
using namespace std;

int main()
{
	char arr[30]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	string a;
	getline(cin,a);
	int index[a.length()+10];
	
	for(int i=0;i<a.length();i++)
	{
		for(int j=0;j<27;j++)
		{
			if(a[i]==arr[j])
			{
				index[i]=j;
			}
		}
	}	
	int k;
	cin >> k;
	for(int i=0;i<a.length();i++)
	{
		index[i]=index[i]+k;
	}
	for(int i=0;i<a.length();i++)
	{
		cout << arr[index[i]];
	}
	cout << endl;
}
