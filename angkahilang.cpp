#include<iostream>
using namespace std;

int main()
{
	int N,i=1;
	cin >> N;
	int a[N+1];
	a[N]=N+1;
	for(int i=1;i<N; i++ )
	{
		cin>>a[i];
	}
	
	for( int i=1; i<=N; i++ )
	{
		for( int j=1; j<=N; j++ )
		{
			if(a[i]>a[j])
			{
				a[i] = a[i] + a[j];
				a[j] = a[i] - a[j];
				a[j] = a[i] - a[j];
			}
		}
	}
	
	while( i<=N )
	{
		if( i==a[i] )
		{
			i++;
		}
		
		else if( i!=a[i] && a[i]-i==1 )
		{
			cout<<i<<endl;
			return 0;
		}
	}
	
}
