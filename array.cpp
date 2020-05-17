#include<iostream>
using namespace std;

int main()
{
	int m,n,k;
	cin >> n;
	cin >> m;
	cin >> k;
	int arr[n][m];
	
	for (int i = 0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(i==0&&j==0)
			{
				arr[i][j]=m;
			}
			else if (i==j)
			{
				arr[i][j]= arr[i-1][j-1]+k;	
			}
			else if (i>j)
			{
				arr[i][j]= arr[i-1][j]-1;
			}
			else if (j>i)
			{
				arr[i][j]= arr[i][j-1]-1;
			}
			if(i==n-1&&j==n-1)
			{
				cout << arr[i][j];
			}else
			{
				cout << arr[i][j]<<' ';
			}
		}
		cout << endl;
	}
}
