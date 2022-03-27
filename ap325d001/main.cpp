#include <iostream>

using namespace std;

int fun()
{
    char a;
    cin>>a;
    if(a=='f')
    {
        int x;
        x=fun();
        return 2*x-1;
    }
    else if(a=='g')
    {
        int x,y;
        x=fun();
        y=fun();
        return x+2*y-3;
    }
    else return a-48;
}

int main()
{
    cout<<fun();
    return 0;
}
