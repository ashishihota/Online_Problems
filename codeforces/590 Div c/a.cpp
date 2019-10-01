#include<bits/stdc++.h>
using namespace std;
#define rep(i,b) for(i=0;i<b;++i)
#define repp(i,a,b) for(i=a;i<b;++i)
#define endl "\n"
#define LLONG_MAX 99999999999999
typedef long long int lli;
int main(){
    lli t,i,n,m,j,k;
    cin>>t;
    while(t--){
        cin>>n;
        vector<lli> v(n);
        rep(i,n)cin>>v[i];
        lli sum=0;
        rep(i,n)sum+=v[i];
        lli ss=sum;
        sum=ceil(double(sum)/double(n));
        cout<<sum<<endl;
    }


    return 0;
}
