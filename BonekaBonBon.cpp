#include <iostream>
#include <sstream>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <cctype>
#include <string>
#include <vector>
#include <list>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <algorithm>
#include <functional>
#define ll long long
using namespace std; 
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;

////////////////////////ISI DENGAN FUNCTION//////////////////////////////

/////////////////////////////////////////////////////////////////////////
int main()
{
 ll x,y,z;
 cin >> x >> y >> z;
 ll temp = x-(y*x/100);
 temp  += temp*z/100;
 cout << temp << endl;   
}
