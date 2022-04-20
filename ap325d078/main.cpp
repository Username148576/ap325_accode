#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;

vector<int> v;

int main()
{
    int n,i,x[200005];
    cin>>n;
    for(i=0;i<n;i++){
        cin>>x[i];
    }
    v.push_back(x[0]);
    for(i=1;i<n;i++){
        if(x[i]<=v[v.size()-1]){
            *lower_bound(v.begin(),v.end(),x[i])=x[i];
        }
        else v.push_back(x[i]);
    }
    cout<<v.size()<<endl;
    return 0;
}
