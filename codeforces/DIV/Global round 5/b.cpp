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


typedef long long int ll;
typedef pair<int, int> pii;
const int MOD = 1e9 + 7;

#define rep(i,b) for(i=0;i<b;++i)
#define repp(i,a,b) for(i=a;i<b;++i)
#define l 131072

int n,m;
int a[100000];
int b[100000];
int c[100000];
int d[100000];
int ms[2 * l];
ll sum = 0;

int get_sum(int dep, int ql, int qr, int ll, int rr){
    if(ql <= ll && rr <= qr) return ms[dep];
    if(qr < ll || rr < ql) return 0;
    return get_sum(dep * 2, ql ,qr , ll,(ll + rr) /2) + get_sum(dep*2+1, ql, qr,(ll+rr)/2+1, rr);
}

void update(int si) {
    int i = si + l;
    ms[i]++;
    i /= 2;
    while (i > 0) {
        ms[i] = ms[i * 2] + ms[i * 2 +1];
        i /= 2;
    }
}

int main() {
    int t = 1,i, j, k;
    while(t--){
        cin >> n;
        for (i = 0; i< n; i++) {
            cin >> a[i];
            a[i]--;
            c[a[i]] = i;
        }
        for(i = 0; i< n; i++){
            cin >> b[i];
            b[i]--;
            d[i] = c[b[i]];
        }
        int cnt = 0;
        for(i = 0; i < n; i++){
            int sum = get_sum(1, 0, d[i], 0, l -1);
            if (sum < d[i]) cnt++;
            update(d[i]);
        }
        cout << cnt << endl;
    }
    return 0;
}
