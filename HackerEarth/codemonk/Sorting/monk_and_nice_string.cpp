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
    ll n;
    cin >> n;
    string s[n];
    std::vector<ll> v;
    for(int i = 0;i <n ;i++){
        cin >> s[i];
    }
    for(int i = 0;i < n; i++){
        ll cnt = 0;
        for(int j = i -1; j >=0; j--){
            if(s[i ] >= s[j]) cnt++;
        }
        v.push_back(cnt);
    }
    for(auto i: v) cout << i << endl;
  return 0;
}
