#include <iostream>
#include<vector>

using namespace std;

int main()
{
    int i,l,b;
    string s;
    while(cin>>s)
    {
        l=s.length();
        vector<char> v;
        b=0;
        for(i=0;i<l;i++)
        {
            if(s[i]=='(' || s[i]=='[' || s[i]=='{')
                v.push_back(s[i]);
            else
            {
                if(s[i]==')')
                {
                    if(v[v.size()-1]!='(')
                    {
                        cout<<"no"<<endl;
                        b=1;
                        break;
                    }
                    else v.pop_back();
                }
                else if(s[i]==']')
                {
                    if(v[v.size()-1]!='[')
                    {
                        cout<<"no"<<endl;
                        b=1;
                        break;
                    }
                    else v.pop_back();
                }
                else
                {
                    if(v[v.size()-1]!='{')
                    {
                        cout<<"no"<<endl;
                        b=1;
                        break;
                    }
                    else v.pop_back();
                }
            }
        }
        if(v.empty())cout<<"yes"<<endl;
        else if(b==0)cout<<"no"<<endl;
    }
    return 0;
}
