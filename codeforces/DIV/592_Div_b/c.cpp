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

ll check(ll p, ll w, ll d){
    ll
    for(int i = 0 ; i <  p; i++){
        if((w * i) + d <= p))
    }
}

int main() {
    ll n, p , w , d, won = 0, lose = 0, draw =0;
    cin >> n >> p >> w >> d;
    if((n * w) + d > p){
        cout << "-1";
        return 0;
    }
    else if(n * w < p){
        cout << "-1";
        return 0;
    }
    else if(p = 0){
        cout << "0 0" << " " << n;
    }
    else{
        int(wpoints) = int(p) * int(w);
        int (won) = int(p) / int(w);
        int draw =  p  - wpoints;

    }

    return 0;
}
