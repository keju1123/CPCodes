#include <iostream>
using namespace std;

int main()
{	
	long long arr[10];
	for(int i=0;i<4;i++)
	{
		cin >> arr[i];
	}
	for (int i = 0; i < 3; i++)       
       for (int j = 0; j < 3-i; j++)  
           if (arr[j] > arr[j+1]) 
              swap(arr[j], arr[j+1]);
    
    cout << arr[3]-arr[0]<<" ";
    cout << arr[3]-arr[1]<<" ";
    cout << arr[3]-arr[2]<<endl;
}
