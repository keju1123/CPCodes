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
ios_base::sync_with_stdio(false); 
   cin.tie(NULL);   cout.tie(NULL);
   int q;
   cin >> q;

   string s[10];
   while(q--){
      for(int i=0;i<9;i++){
         cin >> s[i];
      }
      s[0][0]=s[0][1];
      s[1][3]=s[1][4];
      s[2][6]=s[2][7];
      s[3][1]=s[3][2];
      s[4][4]=s[4][5];
      s[5][7]=s[5][8];
      s[6][2]=s[6][1];
      s[7][5]=s[7][6];
      s[8][8]=s[8][7];
      for(int i=0;i<9;i++){
         cout << s[i] << '\n';
      }
   }

}

