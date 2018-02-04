#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        vector<string> sentence;
        int n,i=0,p=0,ca=0,ce=0;
        cin>>n;
        while(i<n)
        {
            cin>>s;
            if(s[0]>='a'&&s[0]<='z'){p=i; ce++;}
            if(s[0]=='#')ca++;
            sentence.push_back(s);
            i++;
        }
        if(ca==n||ce==n)
        {
            for(int j=0;j<n;j++)
                cout<<sentence[j]<<" ";
            cout<<endl;
            continue;
        }
        for(int j=p+1;j<n;j++)
            cout<<sentence[j]<<" ";
        cout<<sentence[p]<<" ";
        for(int j=0;j<p;j++)
            cout<<sentence[j]<<" ";
        cout<<endl;
    }
    return 0;
}
