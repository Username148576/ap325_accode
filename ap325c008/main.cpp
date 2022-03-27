#include <iostream>

using namespace std;

int x[505],y[25][25];
string s,s1;

void f(int i,int j)
{
    if(i<=0 || j<=0)return;
    if(y[i][j]==3)
    {
        f(i-1,j-1);
        cout<<s1[j-1];
    }
    else if(y[i][j]==2)
        f(i,j-1);
    else
        f(i-1,j);
}

int main()
{
    int n=3;
    while(n--)
    {
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
                    if(x[j]>x[j-1])y[i][j]=1;
                    else y[i][j]=2;
                    x[j]=max(x[j],x[j-1]);
                }
                else
                {
                    a1=x[j];
                    if(j==1)a=x[0];
                    x[j]=a+1;
                    a=a1;
                    y[i][j]=3;
                }
            }
        }
        cout<<s<<' '<<s1<<" = ";
        if(x[l1]==0)
        {
            cout<<'0'<<endl;
            continue;
        }
        f(l,l1);
        for(i=0;i<=l1;i++)x[i]=0;
        cout<<endl;
    }
    return 0;
}
