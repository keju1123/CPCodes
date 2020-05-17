#include<iostream>
#include<string>

using namespace std;

int main()
{
	string s;
	cin >> s;
	string h="";
	bool depank=false ;
	bool allbesar = false;

	if(s[0]>=97)
	{
		depank = true;
	}
	bool sisab;
	if(depank)
	{
		for(int i=1;i<s.length();i++)
		{
			if(s[i]>=65&&s[i]<=91)
			{
				sisab=true;
			}
			else 
			{
				sisab = false;
				break;
			}
		}
		if(sisab==true)
		{
			h+=toupper(s[0]);
			for(int i=1;i<s.length();i++)
			{
				h+=tolower(s[i]);
			}
			cout << h << endl;
			return 0;
		}
		else
		{
			cout << s << endl;
			return 0;
		}
	}
	else if(depank==false)
	{
		for(int i=0;i<s.length();i++)
		{
			if(s[i]>=65&&s[i]<=91)
			{
				allbesar = true;
			}
			else
			{
				allbesar =false;
				break;
			}
		}
		if(allbesar)
		{
			for(int i=0;i<s.length();i++)
			{
				h+=tolower(s[i]);
				
			}
			cout << h << endl;
			return 0;
		}
		else
		{
			cout << s << endl;
			return 0;
		}
	}
	
}
