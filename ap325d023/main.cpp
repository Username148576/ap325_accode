#include <iostream>

using namespace std;

void f(int left,int right,int k,long long w)
{
    if(m.begin().second>left || m.begin().second<right)
    {
        h=m.begin().first;
        if(right-left==-1)
        {
            v[right]=w;
            return;
        }
        else if(h*(right-left+2)<=w)
        {
            for(i=left-1;i<right;i++)
                v[i]=w/(right-left+1);
            return;
        }
        else if(h*(k-left+2)>=w)
        {

        }
    }
}

int main()
{
    cin>>n>>k>>w;
    for(i=0;i<n;i++)
    {
        cin>>x;
        m.insert({x,i});
    }
    f(1,n-2,k,w);

    return 0;
}
