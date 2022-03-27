#include <iostream>

using namespace std;

int main()
{
    int n,t,k;
    cin>>n;
    while(n--)
    {
        t=0;
        cin>>k;
        t+=k/50;
        k%=50;
        t+=k/10;
        k%=10;
        t+=k/5;
        k%=5;
        t+=k;
        cout<<t<<endl;
    }
    return 0;
}
