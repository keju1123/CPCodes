#include<iostream>
using namespace std;

int main()
{
	string YangMain = "1.2";	
	int t;
	cin >> t;
	int winner[t];
	for(int i=0;i<t;i++)
	{
		cin >> winner[i];
	}
	
for(int i=0;i<t;i++)
{	
	if(YangMain == "1.2" && winner[i]==1)
	{
		YangMain = "1.3";
	}
	else if (YangMain == "1.2" && winner[i]==2)
	{
		YangMain = "2.3";
	}
	else if (YangMain == "1.3" && winner[i]==1)
	{
		YangMain = "1.2";
	}
	else if(YangMain == "1.3" && winner[i] == 3)
	{
		YangMain = "2.3";
	}
	else if(YangMain == "2.3" && winner[i] == 2)
	{
		YangMain = "1.2";
	}
	else if(YangMain == "2.3" && winner[i] == 3)
	{
		YangMain = "1.3";
	}
	else
	{
		cout << "NO" << endl;
				return 0;
		break;
	}
}
cout << "YES" << endl;	
}
