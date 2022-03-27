#include <iostream>
#include<set>
using namespace std;

set<int> s;


int main()
{
    int m,n,i,t=0,ans=0,l,j;
    char c;
    string x;
    cin>>m>>n;
    m=(1<<m)-1;
    //cout<<m<<endl;
    for(i=0;i<n;i++)
    {
        t=0;
        set<char> s1;
        cin>>x;
        l=x.length();
        //cout<<l<<endl;
        for(j=0;j<l;j++)s1.insert(x[j]);
        for(auto e:s1)
        {
            //cout<<e<<endl;
            t+=1<<(e-'A');
        }
        //for(j=0;j<l;j++)t|=1<<(x[j]-'A');
        //cout<<t<<endl;
        s.insert(m-t);
        if(s.find(t)!=s.end())ans+=1;
    }

    cout<<ans;
    return 0;
}
