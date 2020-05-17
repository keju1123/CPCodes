// Code By Keju
/*
      :::    ::: :::::::::: ::::::::::: :::    :::   :::     :::    ::::::::   :::::::: 
     :+:   :+:  :+:            :+:     :+:    :+: :+:+:   :+:+:   :+:    :+: :+:    :+: 
    +:+  +:+   +:+            +:+     +:+    +:+   +:+     +:+         +:+         +:+  
   +#++:++    +#++:++#       +#+     +#+    +:+   +#+     +#+       +#+        +#++:    
  +#+  +#+   +#+            +#+     +#+    +#+   +#+     +#+     +#+             +#+    
 #+#   #+#  #+#        #+# #+#     #+#    #+#   #+#     #+#    #+#       #+#    #+#     
###    ### ##########  #####       ########  ####### ####### ##########  ########  
*/
#include <bits/stdc++.h>
#include <iomanip>

#define debug(x) cout<<'>'<<#x<<"="<<x<<'\n'
#define debug2(x,y) cout<<'>'<<#x<<"="<<x<<","<<#y<<"="<<y<<'\n'
#define debug3(x,y,z) cout<<'>'<<#x<<"="<<x<<","<<#y<<"="<<y<<","<<#z<<"="<<z<<'\n'
#define pb                    push_back
#define _FastIO ios::sync_with_stdio(false); cin.tie(0);
using namespace std;
#define loop(i,a,b)           for(int i=(int)a;i<(int)b;++i)
#define mset(a,b,c)           loop(i,0,b) a[i]=c   //name, size, value
//Convert int to string
template <typename T>
string to_str(T str)
{
    stringstream stream;
    stream << str;
    return stream.str();
}
//Convert string to int
template <typename T>
int to_int(T num)
{
    int val;
    stringstream stream;
    stream << num;
    stream >> val;
    return val;
}


//////////////////////////////////////FUNCTIONS////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////////////////


int main()
{
    _FastIO;

    int n;
    cin >> n;
    vector<int> arr;
    for(int i=0;i<n;i++)
    {
    	int zz;
    	cin >> zz;
    	arr.pb(zz);
    }
    vector<int> arr2;

    int m;
    int cnt=0;
    cin >> m;
    for(int i=0;i<m;i++)
    {
    	int y;
    	cin >> y;
    	arr2.pb(y);

    }

	sort(arr.begin(), arr.end(), greater<int>()); 

    	for(int j=0;j<n+1;j++)
    	{
    		cnt++;
    		if(arr[j]==arr[j-1])
    		{
    			cnt--;
    		}
    		if(arr[j]==y)
    		{
    			cout << cnt << endl;
    			cnt=0;
    			break;
    		}
    	}

}