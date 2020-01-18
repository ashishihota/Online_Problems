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
    ll sub, mx, avg;
    cin >> sub >> mx >> avg;
    ll v[sub],got = 0,tot =0;
    tot = avg * sub;
    for(int i = 0; i < sub -1; i++){
        cin >> v[i];
        got += v[i];
    }
    ll req;
    req = tot -got;
    // cout  << "req = " << req <<endl;

    if(floor(double(got/sub)) >= avg){
        cout <<0<<endl;
    }
    else  if(req > avg){
        cout << -1<<endl;
    }
    else {
        cout <<req <<endl;
    }
  return 0;
}
