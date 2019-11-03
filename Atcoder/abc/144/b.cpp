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
    std::vector<ll> v;
    for(int i =1 ;i <=9; i++){
        for(int j = 1 ;j <= 9; j++){
            v.push_back(i * j);
        }

    }
    bool cnt  = false;
    for(int i = 0;i < v.size(); i++){
        if(v[i] == n) {
            cnt = true;
            break;
        }
    }
    if(cnt ) cout << "Yes";
    else cout << "No";

  return 0;
}
