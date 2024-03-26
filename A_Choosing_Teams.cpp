#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n,k;
    cin>>n>>k;

    vector<int> y(n);
    for(int i=0;i<n;i++) 
    {
        cin>>y[i];
    }
    int max_teams = 0;
    int eligible_students = 0;
    for(int i=0;i<n;i++) 
    {
        if(y[i] <= 5 - k) 
        {
            eligible_students++;
        }
    }
    max_teams=eligible_students/3;
    cout<<max_teams<<endl;
    return 0;
}
