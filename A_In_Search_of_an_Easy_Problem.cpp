#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    bool flag= false;
    while(test--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if(a==1 || b== 1 || c==1)
        {
            flag = true;
        }
    }
    if(flag)
    {
        cout<<"HARD"<<endl;
    }
    else
    {
        cout<<"EASY"<<endl;
    }
    return 0;
}