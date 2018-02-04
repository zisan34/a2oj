#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int n,k;
    cin>>n>>k;
    int sum=0;
    while(n--)
    {
        int i;
        cin>>i;
        sum+=i/k;
    }
    cout<<sum<<endl;
    }
    return 0;
}
