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

bool ret(ll x , ll y){
    ll n = min(x, y);
    for(int i = 2; i <= n; i++){
        if((x % i == 0) && (y % i == 0)){
            return true;
        }
    }
    return false;
}

int main() {
    ll a, b , n;
    cin >> n;
    while(n--){
        cin >> a >> b;
        if(a == 1 || b == 1){
            cout << "Finite" << endl;
            continue;
        }
        bool bo = false;
        for(int i = 2; i <= min(a,b); i++){
            if((a % i == 0) && (b % i == 0)) bo = true;
        }
        if(bo) cout << "Infinite" << endl;
        else cout <<"Finite" << endl;
    }

  return 0;
}
