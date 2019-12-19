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
    ll num;
    cin >> num;
    while (num--) {
        ll a, b , n, s, tot = 0;
        cin >> a >> b >> n >> s;
        ll rem = floor(double(s)/double(n));
        if(rem > a){
            if(a * n + b < s) cout << "NO"<<endl;
            else cout << "YES" <<endl;
        }
        else {
            if((rem * n + b) >= s) cout << "YES" <<endl;
            else cout << "NO" <<endl;
        }
    }

  return 0;
}
