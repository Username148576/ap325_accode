#include <iostream>
#include<vector>

using namespace std;

vector<int> v;
vector<char> v1;

int main()
{
    int l,i,x,ans=0;
    string s;
    cin>>s;
    l=s.length();
    for(i=0;i<l;i++)
    {
        if(s[i]=='*')
        {
            x=v[v.size()-1];
            v.pop_back();
            v.push_back(x*(s[i+1]-48));
            i++;
        }
        else if(s[i]=='/')
        {
            x=v[v.size()-1];
            v.pop_back();
            v.push_back(x/(s[i+1]-48));
            i++;
        }
        else if(s[i]=='+' || s[i]=='-')v1.push_back(s[i]);
        else v.push_back(s[i]-48);
    }
    ans+=v[0];
    for(i=0;i<v1.size();i++)
    {
        if(v1[i]=='+')
            ans+=v[i+1];
        else
            ans-=v[i+1];
    }
    cout<<ans<<endl;
    return 0;
}
