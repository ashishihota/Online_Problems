#include <array>
#include <cassert>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <queue>
#include <stack>
#include <list>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <algorithm>
#include <complex>
#include <cmath>
#include <numeric>
#include <bitset>
#include <functional>
#include <random>
#include <ctime>

using namespace std;


typedef long long ll;
typedef pair<int, int> pii;
const int MOD = 1e9 + 7;

#define rep(i,b) for(i=0;i<b;++i)
#define repp(i,a,b) for(i=a;i<b;++i)

int main() {
    ll n, k, m,sum = 0,req,tot;
    cin >> n >> k >> m; // n = num / k = max / m = avg;
    ll v[n];
    for(int i = 0; i <  n -1; i++){
        cin >> v[i];
        sum += v[i];
    }
    tot  = m * n;
    req = tot - sum;
    if(req > k ) cout << -1 <<endl;
    else cout << max(ll(0),req)<<endl;
  return 0;
}
