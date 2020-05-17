#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int awal,target=0;
	int arr[awal+1];
	cin >> awal;
	while(awal!=0)
	{
		for(int i=1;i<=awal;i++)
		{
			cin >> arr[i];
			
		}
		cin >> target;
		int artarget[target+1];
		for(int i=1;i<=target;i++)
		{
			cin >> artarget[i];
		}
		int armini[target+1];
		for(int k=1;k<=target;k++)
		{
			int sel=999999999;
			for(int i =1;i<=awal;i++)
			{
				for (int j=1;j<=awal;j++)
				{
					if(abs(arr[i]+arr[j]-artarget[k])< sel)
					{
						sel = abs(arr[i]=arr[j]-artarget[k]);
						armini[k]=abs(arr[i]+arr[j]);
					}
				}
			}
			cout << "closest sum : "<< armini[k];
		}
		cin >> awal;
	}
}
