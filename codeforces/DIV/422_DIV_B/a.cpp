#include<bits/stdc++.h>
using namespace std;


typedef long long ll;
typedef pair<int, int> pii;
const int MOD = 1e9 + 7;

#define rep(i,b) for(i=0;i<b;++i)
#define repp(i,a,b) for(i=a;i<b;++i)

ll fact(ll n){
    return (n==0 || n ==1) ? 1: n * fact(n-1);
}

int main() {
    ll n,m;
    cin >>n >> m;
    nf = fact(n);
    mf = fact(m);
    cout <<__gcd(nf,mf);

  return 0;
}
