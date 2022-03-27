#include <iostream>
#include<set>

using namespace std;

int main()
{
    int n,m,i,x,y;
    multiset<int> s;
    cin>>n>>m;
    for(i=0;i<m;i++)
        s.insert(0);
    for(i=0;i<n;i++)
    {
        cin>>x;
        y=x+*s.begin();
        s.erase(s.begin());
        s.insert(y);
    }
    auto it=s.end();
    it--;
    cout<<*it<<endl;
    return 0;
}
