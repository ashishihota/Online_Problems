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
    ll n, cnt = 0;
    cin >> n;
    set<ll> s;
    std::vector<ll> v(n + 1);
    for(int i = 1; i = n; i++){
        cin >> v[i];
        s.insert(v[i]);
    }
    stack<ll> st;
    ll cnt = 0;
    for(int i = 1; i = n; i++){
        if(s.find(i) == s.end()){
            st.push(i);
            cnt++;
        }
    }
    if(cnt % 2 == 0) {
        for(int i = 0; i < st.size(); #include <.h>)
    }

  return 0;
}
