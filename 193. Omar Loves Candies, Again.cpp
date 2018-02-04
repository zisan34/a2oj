#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int candies[26];
        for(int i=0;i<26;i++)candies[i]=0;
        int l=s.length();
        for(int i=0;i<l;i++)
        {
            int tmp;
            tmp=(int)(s[i]-97);
            candies[tmp]++;
        }
        int c=0,m=0;
        for(int i=0;i<26;i++)
        {
            if(candies[i]>m){c=i,m=candies[i];}
        }
        char a=97+c;
        cout<<m<<" "<<a<<endl;
    }
    return 0;
}
