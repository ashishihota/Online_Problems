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
    int n, f, s, t;
    cin >> n;
    ll a[3];
    while(n--){
        cin >> a[0] >> a[1] >> a[2];
        ll count =0;
        while(a[2] > 1 && a[1] > 0){
            a[2] -= 2;
            a[1] --;
            count += 3;
        }
        while(a[0] > 0 && a[1] > 1 ){
            a[1] -= 2;
            a[0]--;
            count += 3;
        }
        cout << count << endl;
    }
    return 0;
}
