#include <iostream>
#include<map>

using namespace std;

int main()
{
    int n,x,y,a,b,Max=0,ans=1,i;
    multimap<int,int> m;
    cin>>n;
    cin>>x>>y;
    for(i=0;i<n;i++)
    {
        cin>>a>>b;
        m.insert({a,b});
    }
    b=0;
    for(auto e:m)
    {
        if(x<e.first && Max>=e.first && Max<e.second)
        {
            x=Max;
            ans++;
        }
        else if(x<e.first && Max<e.first)
        {
            cout<<"-1"<<endl;
            b=1;
            break;
        }
        if(e.second>Max)
        {
            Max=e.second;
            if(Max>=y)
            {
                cout<<ans<<endl;
                b=1;
                break;
            }
        }
    }
    if(b==0)
        cout<<"-1"<<endl;
    return 0;
}
