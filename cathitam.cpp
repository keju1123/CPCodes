#include<iostream>
using namespace std;

int main()
{
	int a,counter=0,pagar=0,titik=0;
	cin >> a;
	string s;
	cin >> s;
	if(s[0]=='#')
	{
		for(int i=0;i<a;i++)
		{
			if(s[i]=='#')
			{
				pagar++;
			}
			else if(s[i]=='.')
			{
				titik++;
			}
			
			if(pagar>=titik)
			{
				counter=pagar;
			}
			else
			{
				counter=titik;
			}
			
		}
	}
	else
	{
		for(int i=1;i<a;i++)
		{
			if(s[i]== '.' && s[i-1] == '#')
			{
				counter++;	
			}
		}
	}
	cout << counter << endl;
}
