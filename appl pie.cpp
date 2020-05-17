#include<iostream>
#include <string>
#include <vector>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;


int main()
{
	int n;
	cin >> n;
	string kota[n+10];
	int poin[n+10];
	int asci[n+10][11];
	for(int i = 1;i<=n;i++)
	{
		cin >> kota[i];
		cin >> poin[i];
	}
	
 	bool swapped; 
   	for (int i = 1; i < n; i++) 
   	{ 
    	swapped = false; 
     	for (int j = 1; j < n-i; j++) 
    	{ 
        	if (kota[j] > kota[j+1]) 
        	{ 
           		swap(kota[j], kota[j+1]); 
           		swapped = true; 
        	} 
     	}   
    if (swapped == false) 
        break; 
   	} 
	   	
	for(int i=1;i<=n;i++)
	{
		cout << kota[i]<< endl;
	}
}
