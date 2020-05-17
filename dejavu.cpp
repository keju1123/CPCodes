#include <iostream>
#include<vector>
#include<string>
using namespace std;

int main() {


string s;
cin >> s;
char v[sizeof(s)];
int x = sizeof(s);

for(int i = 0;i<x;i++)
{
    for(int j=0;j<x;j++)
    {
        if(s[i]==v[j])
        {
            cout << "Deja Vu" << endl;
            return 0;
        }
        else
        {
            v.push_back(s[i]);
        }
    }
}
cout << "Unique" << endl;
    return 0;
}