#include <iostream>

using namespace std;

long long a=0,y,p,ans;

int f(int i)
{
    if(i==1)return a%p;
    ans=f(i/2);
    if(i%2==0)return ans%p*ans%p;
    else return ans%p*ans%p*a%p;
}

int main()
{
    int l,i;
    string s;
    cin>>s>>y>>p;
    l=s.length();
    //cout<<s<<endl;
    for(i=1;i<l+1;i++)
    {
        long long x=l-i,t=1;
        while(x--)
        {
            t*=10;
            t%=p;
        }
        a+=(s[i-1]-48)*t%p;
        a%=p;
    }
    //cout<<a<<endl;
    cout<<f(y);
    return 0;
}
