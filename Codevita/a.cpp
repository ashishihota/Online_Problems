#include<bits/stdc++.h>
using namespace std;
#define rep(i,b) for(i=0;i<b;++i)
#define repp(i,a,b) for(i=a;i<b;++i)
#define endl "\n"
//#define LLONG_MAX 99999999999999
typedef long long int lli;
int main(){
    lli t,n,i,j,b;
    cin>>n;
    vector<vector<char>> v(n,vector<char>(n));
    rep(i,n){
        rep(j,n)cin>>v[i][j];
    }
    lli ans=0;
    lli sti,stj,eni,enj;
    sti=stj=0;
    eni=enj=n-1;
    vector<lli> vans;
    while(sti<eni&&stj<enj){
        if(sti==n/2&&stj==n/2){
            break;
        }
        vector<char> ch;
        lli sii,sjj,eii,ejj;
        sii=sti;
        sjj=stj;
        eii=eni;
        ejj=enj;
        for(i=stj;i<=enj;i++)ch.push_back(v[sti][i]);
        sti++;
        for(i=sti;i<=eni;i++)ch.push_back(v[i][enj]);
        enj--;
        for(i=enj;i>=stj;i--)ch.push_back(v[eni][i]);
        eni--;
        for(i=eni;i>=sti;i--)ch.push_back(v[i][stj]);
        stj++;
        int ind;
        for(i=0;i<ch.size();i++){
            if(ch[i]=='X'){
                ind=i;
                break;
            }
        }
        if(ind<ch.size()/2){
            vans.push_back(ind);
        }
        else{
            vans.push_back(ind-ch.size());
        }
        for(i=sjj;i<=ejj;i++){
            v[sii][i]=ch[ind%ch.size()];
            ind++;
        }
        sii++;
        for(i=sii;i<=eii;i++){
            v[i][ejj]=ch[ind%ch.size()];
            ind++;
        }
        ejj--;
        for(i=ejj;i>=sjj;i--){
            v[eii][i]=ch[ind%ch.size()];
            ind++;
        }
        eii--;
        for(i=eii;i>=sii;i--){
            v[i][sjj]=ch[ind%ch.size()];
            ind++;
        }
        sjj++;

    }
    rep(i,vans.size())cout<<vans[i]<<" ";
    cout<<endl;
    rep(i,n){
        rep(j,n)cout<<v[i][j]<<" ";
        cout<<endl;
    }


    return 0;
}
