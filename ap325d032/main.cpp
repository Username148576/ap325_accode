#include <iostream>
#include<queue>

using namespace std;

struct p{
    int x,y;
};

queue<p> s,b;

int main()
{
    int n,a,i,l,ans=0;
    cin>>n>>l;
    for(i=0;i<n;i++)
    {
        cin>>a;
        if(i>=l)
        {
            if(b.front().y<=i-l)b.pop();
            if(s.front().y<=i-l)s.pop();
        }
        while(!b.empty() && a>b.front().x)
            b.pop();
        b.push({a,i});
        while(!s.empty() && a<s.front().x)
            s.pop();
        s.push({a,i});
        //cout<<s.front().x<<' '<<s.front().y<<endl;
        //cout<<b.front().x<<' '<<b.front().y<<endl;
        if(b.front().x-s.front().x>ans)ans=b.front().x-s.front().x;
    }
    cout<<ans<<endl;
    return 0;
}
