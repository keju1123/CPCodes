#include <iostream>
#include <sstream>
#include <bitset>
#include <string>

using namespace std;

const unsigned g_unMaxBits = 32;

string hextobin(const string &s){
    string out;
    for(auto i: s){
        uint8_t n;
        if(i <= '9' and i >= '0')
            n = i - '0';
        else
            n = 10 + i - 'A';
        for(int8_t j = 3; j >= 0; --j)
            out.push_back((n & (1<<j))? '1':'0');
    }

    return out;
}

string bintohex(const string &s){
    string out;
    for(int i = 0; i < s.size(); i += 4){
        int8_t n = 0;
        for(int j = i; j < i + 4; ++j){
            n <<= 1;
            if(s[j] == '1')
                n |= 1;
        }

        if(n<=9)
            out.push_back('0' + n);
        else
            out.push_back('A' + n - 10);
    }

    return out;
}

int main()
{
    string s;
    cin >> s;
    string y = hextobin(s);
    cout << y[y.length()-1] << endl;

    return 0;
}