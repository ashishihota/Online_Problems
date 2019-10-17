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
    ll cnt,n,drop = 1;
    std::vector<ll> v;
    cin >> cnt;
    while(cnt--){
        cin >> n;
        for(int i = 0; i < n; i++){
            cin >> v[i];
        }
        ll small = v[0];
        for(int i = 1 ; i< 5; i++){
            if(v[i] < small) {
                small = v[i];
                drop++;
            }
        }
        for(int i = 6; i < n; i++){
            if ( v[i] < small || v[i] < v[i - 6]){
                drop ++;
                small = v[i];
            }
        }
        cout << drop  << endl;
    }
  return 0;
}
