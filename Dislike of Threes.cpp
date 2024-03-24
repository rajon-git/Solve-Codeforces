//poblem link : https://codeforces.com/problemset/problem/1560/A

#include<bits/stdc++.h>
using namespace std;
bool isDivisibled(int n)
{
    return (n%3 == 0 || n%10 == 3);
}
int PolycarpKth(int k)
{
    int num = 1;
    int Count = 0;
    while(Count < k)
    {
        if(!isDivisibled(num))
        {
            Count++;
        }
        num++;
    }
    return num-1;
}
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int a;
        cin>>a;
        int result = PolycarpKth(a);
        cout<<result<<endl;
    }
    return 0;
}
