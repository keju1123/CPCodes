#include<iostream>
using namespace std;
int tulis(int kedalaman,int n);
int main()
{
	
	int n,k;
	cin >> n >> k;
	for(int i=1;i<=n;i++)
	{
		cout << tulis(k,n);
	}
}

int tulis(int kedalaman,int n)
{
	int N = n;
	int catat[kedalaman];
	if (kedalaman >= N)
       for(int i=1;i<=N;i++)
       {
       		cout << catat[i];
	   }
    else
    {
    	for (int i=catat[kedalaman-1]+1;i<n;i++)
		{
            catat[kedalaman] = i;
            return tulis(kedalaman + 1,n);
		}
	}
        
}

