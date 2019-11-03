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
    ll n , i = 0, sum = 0, total = 0;
    cin >> n;
    ll a[n];
    while(i < n){
        cin >> a[i];
        sum += a[i];
        i++;
    }
    if (sum / n == 0) cout << "0";
    else {
        int avg = ceil(double(sum)/double(n));
        cout << avg << " - " << sum << " - ";
        for(int i = 0; i < n; i++){
            total += pow(a[i] - avg, 2);
        }
    }
    cout << total;
  return 0;
}
