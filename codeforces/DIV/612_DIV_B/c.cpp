#include<bits/stdc++.h>
using namespace std;


typedef long long ll;
typedef pair<int, int> pii;
const int MOD = 1e9 + 7;

#define rep(i,b) for(i=0;i<b;++i)
#define repp(i,a,b) for(i=a;i<b;++i)

int main() {
    ll n, x;
    cin >> n;
    std::vector<ll> v(n) , vv, o(n);
    for(int i = 0; i < n; i++){
        o[i] = i + 1;
    }
    std::vector<bool> w(n);
    w.assign(n,true);
    for(int i = 0; i < n; i++){
        cin >> x;
        v[i] = x;
        if(x != 0){
            vv.push_back(x);
            o.erase(o.begin() + x);
        }
    }
    //sort(vv.begin(), vv.end());
    for(auto i: o) cout << i << " ";
  return 0;
}

// 5
// 0 5 0 2 3
