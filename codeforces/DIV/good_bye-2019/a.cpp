#include<bits/stdc++.h>
using namespace std;


typedef long long ll;
typedef pair<int, int> pii;
const int MOD = 1e9 + 7;

#define rep(i,b) for(i=0;i<b;++i)
#define repp(i,a,b) for(i=a;i<b;++i)

int main() {
    ll n,k,kk;
    ll num;
    cin >> num;
    while(num--){
        ll maxx = 0, maxxx= 0;
        cin >> n >> k >> kk;
        ll v[k],vv[kk];
        for(int i = 0; i < k; i++){
            cin >> v[i];
            maxx = max(maxx,v[i]);
        }
        for(int i = 0; i < kk; i++){
            cin >> vv[i];
            maxxx = max(maxxx,vv[i]);
        }
        if(maxx > maxxx){
            cout << "YES"<<endl;
        }
        else cout <<"NO" <<endl;
    }
  return 0;
}
