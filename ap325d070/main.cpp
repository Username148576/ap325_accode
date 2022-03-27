#include <iostream>

using namespace std;

int x[505];

int main()
{
    int n=3;
    string s,s1;
    int l,l1,i,j,a=0,a1;
    cin>>s;
    cin>>s1;
    l=s.length();
    l1=s1.length();
    for(i=1;i<=l;i++)
    {
        for(j=1;j<=l1;j++)
        {
            if(s[i-1]!=s1[j-1])
            {
                a=x[j];
                if(j!=1)
                    x[j]=max(x[j],x[j-1]);
            }
            else
            {
                a1=x[j];
                if(j==1)a=x[j-1];
                x[j]=a+1;
                a=a1;

            }
            cout<<x[j]<<' ';
        }
        cout<<endl;
    }
    cout<<x[l1]<<endl;
    return 0;
}
