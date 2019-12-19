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
    ll n, m , d;
    cin >> n >> m >> d;
    std::vector<ll> v;
    for(int i = 0; i < m; i++){
        ll x;
        cin >> x;
        v.push_back(x);
    }
    std::vector<ll> vv;
    ll j = 0, s = 0;
    for(int i = 0; i < n + 3 ;){
        s = v[j] + d;
        vv[s] = 1;
        j++;
        i = s;
        if(j > m) break;
    }
    for(auto i: vv) cout << i << " ";
    return 0;
}
