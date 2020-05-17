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
#define _FastIO ios::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;
using ll = long long;
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

    int t;
    cin >> t;
    for(int zz=0;zz<t;zz++)
    {
    	long long a;
    	long long ans;
    	cin >> a;
    	if(a%2==1)
    	{
    		ans = a/2;
    	}
    	else
    	{
    		ans = a/2-1;
    	}
    	cout << ans << endl;
    	ans =0;
    }

}