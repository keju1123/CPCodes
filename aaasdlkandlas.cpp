#include<iostream>
using namespace std;

int main()
{
	int a,b,c;
	cin >> a;
	cin >> b;
	cin >> c;
	int h[5];
	int min=0; 
	h[1] = 10*a+b+c;
	h[2] = 10*b+a+c;
	h[3] = 10*c+a+b;
	for(int i = 1;i<4;i++)
	{
		if(h[i]>min)
		{
			min = h[i];
		}
	}
	cout << min << endl;

}
