
//Problem link: https://codeforces.com/problemset/problem/1367/A
#include<bits/stdc++.h>
using namespace std;
string originalString(string& b)
{
    string a;
    for(int i=0;i<b.length()-1;i+=2)
    {
        a+=b[i];
    }
    if(b.length()%2 == 0)
    {
        a+=b[b.length()-1];
    }
    return a;
}
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        string s;
        cin>>s;
        string original = originalString(s);
        cout<<original<<endl;
    }
    return 0;
}
