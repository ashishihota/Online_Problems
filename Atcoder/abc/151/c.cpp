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
    ll n , m, wa = 0,x =0, ac = 0, cnt = 0;
    cin >> n >> m;
    string s[m];
    std::vector<ll> v;
    std::vector<bool> vb(MOD, false);
    for(int i = 0; i< m; i++){
        cin >> x;
        v.push_back(x);
        cin >> s[i];
        if(s[i] == "AC") {
            vb[x] = true;
        }
    }
    for(int i = 0; i< m; i++){
        if(vb[v[i]] && s[i] == "AC"){
            vb[v[i]] = false;
            ac++;
        }
        else if(vb[v[i]] && s[i] == "WA"){
            wa++;
        }
    }
    cout << ac << " "<< wa;
  return 0;
}
