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
    ll n, count = 0;
    cin >>n;
    std::vector<ll> v(n);
    for(int i= 0; i < n; i++){
        cin >> v[i];
    }
    for(int i = 0; i <= n - 3; i--){
        if((v[i] < v[i + 1] + v[i +2]) && (v[i + 1] < v[i] + v[i +2]) && (v[i + 2] < v[i + 1] + v[i]))
        {
            v[i]--;
            v[i + 1] --;
            v[i + 2] --;
            count++;
            i--;
        }
    }
    cout << count;
  return 0;
}
