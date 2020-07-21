#include <bits/stdc++.h>
typedef long long ll;
typedef pair<int, int> pii;
const int MOD = 1e9 + 7;

#define rep(i,b) for(i=0;i<b;++i)
#define repp(i,a,b) for(i=a;i<b;++i)

int main() {
    ll n, m, sum = 0, total = 1;
    cin >> n >> m;
    m += 1;
    while (--m) {
        cout << "m * n " << m << " " << n << endl;
        total = n * m;
        sum+=total;
    }
    cout << sum + 1;
  return 0;
}
