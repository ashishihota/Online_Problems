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
    for(int i = 0; i < n; i++){
        ll num = 0;
        cin >> num;
        ll a[num], b[num];
        for(int i = 0; i < num; i++){
            cin >> a[i] - 1;
        }
        for(int i = 0; i < num; i++){
            b[i] = i;
        }
        /*

            b[i] = 0 1 2
            a[i] = 1 2 0

        */

        for(int i = 0; i < num; i++){
            ll cnt = 1;
            for(int j = 0; j < num;){
                if(b[j] == a[i]) cout << cnt;
                else j = a[i];
            }
        }
    }

  return 0;
}
