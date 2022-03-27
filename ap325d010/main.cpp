#include <iostream>
#include<set>
using namespace std;
set<int> s;
int main()
{
    int n,i,x;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>x;
        s.insert(x);
    }
    cout<<s.size()<<endl;
    for(auto e:s)cout<<e<<' ';
    cout<<endl;
    return 0;
}
