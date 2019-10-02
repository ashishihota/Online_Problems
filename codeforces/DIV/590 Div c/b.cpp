#include<bits/stdc++.h>
using namespace std;
#define rep(i,b) for(i=0;i<b;++i)
#define repp(i,a,b) for(i=a;i<b;++i)
#define endl "\n"
#define LLONG_MAX 99999999999999
typedef long long int lli;
int main(){
    lli t,i,n,m,j,k;
    cin>>t>>k;
    queue<lli> q;
    map<lli,lli> mp;
    while(t--){
        cin>>n;
        if(mp[n]>0){
            continue;
        }
        if(q.size()>=k){
            mp[q.front()]--;
            q.pop();
            q.push(n);
            mp[n]++;
        }
        else{
            mp[n]++;
            q.push(n);
        }
    }
    cout<<q.size()<<endl;
    vector<lli> vv;
    while(!q.empty()){
        vv.push_back(q.front());
        q.pop();
    }
    reverse(vv.begin(),vv.end());
    rep(i,vv.size())cout<<vv[i]<<" ";
    cout<<endl;


    return 0;
}
