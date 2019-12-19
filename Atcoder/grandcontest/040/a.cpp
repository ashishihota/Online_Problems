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
    string s;
    cin >> s;
    ll len = s.length() , cntmx = 0, cntmn = 0;
    std::vector<ll> v(len);
    for(int i = 0; i < len; i++ ){
        if(s[i] == '<'){
            v[i + 1 ] = v[i] + 1;
        }
    }
    for(int i = len -1; i > 0; i-- ){
        if(s[i] == '>'){
            v[i -1] = v[i] + 1;
        }
    }
    for(int i = 0; i < len; i++) cout << v[i] << " ";

  return 0;
}
