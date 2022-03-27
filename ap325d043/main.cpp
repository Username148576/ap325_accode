#include <iostream>
#include<set>

using namespace std;

multiset<int,greater<int> > s,s1;

int main()
{
    int n,i,a,t=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a;
        s.insert(a);
    }
    for(i=0;i<n;i++)
    {
        cin>>a;
        s1.insert(a);
    }
    for(auto e:s1)
    {
        while(!s.empty())
        {
            if(*s.begin()<e)
            {
                t++;
                s.erase(s.begin());
                break;
            }
            else
                s.erase(s.begin());
        }
        if(s.empty())
            break;
    }
    cout<<t<<endl;
    return 0;
}
