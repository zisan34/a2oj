#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int cn1,cn2;
        cin>>cn1>>cn2;
        int c1,c2;
        cin>>c1;
        n--;
        while(n--)
        {
            cin>>c2;
        }
        if(c1==cn1&&c2==cn2)
            cout<<"BOTH"<<endl;
        else if(c1==cn1&&c2!=cn2)
            cout<<"EASY"<<endl;
        else if(c1!=cn1&&c2==cn2)
            cout<<"HARD"<<endl;
        else
            cout<<"OKAY"<<endl;
    }
    return 0;
}
