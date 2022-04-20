#include <iostream>

using namespace std;

long long x[105];

int main()
{
    int i,j,n;
    cin>>n;
    x[0]=1;
    for(i=1;i<=n;i++){
        for(j=0;j<i;j++){
            x[i]=(x[i]+(((x[j]%1000000009)*(x[i-j-1]%1000000009))%1000000009))%1000000009;
        }
    }
    cout<<x[n]<<endl;
    return 0;
}
