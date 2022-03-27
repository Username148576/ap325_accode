#include <iostream>

using namespace std;

int x[100005];

long long f(int le,int ri)
{
    if(le+1>=ri)return 0;
    int m=(le+ri)/2;
    long long w=f(le,m)+f(m,ri),cross=0;
    int j=m,temp[ri-le],k=0;
    for(int i=le;i<m;i++)
    {
        while(j<ri && x[j]<x[i])
        {
            temp[k++]=x[j++];
        }
        temp[k++]=x[i];
        cross+=j-m;
    }
    for(int i=0;i<k;i++)
    {
        x[le+i]=temp[i];
    }
    return w+cross;
}

int main()
{
    int n,i;
    cin>>n;
    for(i=0;i<n;i++)cin>>x[i];
    cout<<f(0,n);
    return 0;
}
