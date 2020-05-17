#include<iostream>
using namespace std;

int main()
{
	int a,sum=0;
	cin >> a;
	string arr[a+10];
	for(int i=0;i<=a;i++)
	{
		getline(cin,arr[i]);
		if(arr[i]=="Tetrahedron")
		{
			sum=sum+4;
		}
		else if(arr[i]=="Cube")
		{
			sum=sum+6;
		}
		else if(arr[i]=="Octahedron")
		{
			sum=sum+8;
		}
		else if(arr[i]=="Dodecahedron")
		{
			sum = sum+12;
		}
		else if(arr[i]=="Icosahedron")
		{
			sum=sum+20;
		}
	}
	cout << sum << endl;
}
