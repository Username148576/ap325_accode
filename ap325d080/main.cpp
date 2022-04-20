#include <iostream>

using namespace std;

int x[20],a[20][10];

int main()
{
    int i,j,k,ans=0,Min=0,mx=0;
    string s;
    cin>>s;
    for(i=0;i<s.length();i++)x[i]=s[i]-48;
    a[0][0]=0;
    for(i=1;i<=9;i++)a[0][i]=1;
    for(i=1;i<s.length();i++){
        for(j=1;j<=9;j++){
            for(k=j;k<=9;k++){
                a[i][j]+=a[i-1][k];
            }
            a[i][0]+=a[i-1][j];
        }
        a[i][0]+=a[i-1][0];
    }
    for(i=0;i<s.length();i++){
        if(Min>x[i])break;
        for(j=Min;j<x[i];j++){
            ans+=a[s.length()-i-1][j];
        }
        if(Min<x[i]){
                Min=x[i];
                mx++;
        }
    }
    if(mx==s.length())ans++;
    cout<<ans<<endl;
    return 0;
}
