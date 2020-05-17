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
unsigned long long doublefactorial(unsigned long long n) 
{ 
    if (n == 0 || n==1)
    {
    	return 1;
    } 
    else
    {
    	return n*doublefactorial(n-2); 
    }
    
} 
///////////////////////////////////////////////////////////////////////////////////////////


int main()
{
    _FastIO;

    int n;
    cin >> n;

    switch(n)
    {
    	case(1):
    	cout << endl;
    	break;

    	case(2):
    	cout << endl;
    	break;

    	case(3):
    	cout << endl;
    	break;

    	case(4):
    	cout << endl;
    	break;

    	case(5):
    	cout << endl;
    	break;

    	case(6):
    	cout << "thelast" << endl;
    	break;

    	case(7):
    	cout << "red" << endl;
    	break;

    	case(8):
    	cout << "bon" << endl;
    	break;

    	case(9):
    	cout << "thelast" << endl;
    	break;

    	case(10):
    	cout << "newyear" << endl;

    	case(11):
    	cout << "defense" << endl;
    	break;
    }
}