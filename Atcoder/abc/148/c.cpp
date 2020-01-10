#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> pii;
const int MOD = 1e9 + 7;

#define rep(i,b) for(i=0;i<b;++i)
#define repp(i,a,b) for(i=a;i<b;++i)

int main() {
     ll n,m,mc;
     cin >>n >> m;
     mc = max(n,m);
     for(ll i =  mc; i <= n*m; i++){
         if(i % n == 0 && i % m == 0){
             cout << i <<endl;
             break;
         }
     }
  return 0;
}
