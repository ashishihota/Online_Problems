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
    ll num, n, x;
    cin >> num;
    while (num --) {
        cin >> n;
        ll count = 1;
        std::vector<ll> v(n);
        for(int i = 0; i  < n; i++){
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        for(int i = 1; i < n; i++){
            if (v[i] - v[i - 1] <= 1) count = 2;
        }
        cout << count << endl;
    }
  return 0;
}
