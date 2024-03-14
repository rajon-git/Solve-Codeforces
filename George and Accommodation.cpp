#include<bits/stdc++.h>
using namespace std;
bool dormitory(int a,int b)
{
    if((b-a) < 2)
    {
        return false;
    }
    else
    {
        return true;
    }
}
int main()
{
    int n;
    cin>>n;
    int cnt=0;
    while(n--)
    {
        int a,b;
        cin>>a>>b;
        if(dormitory(a,b))
        {
            cnt++;
        }

    }
    cout<<cnt;
    return 0;
}
