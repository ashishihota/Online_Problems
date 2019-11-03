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
    ll a, b;
    cin >> a >> b;
    if (b - a > 1) cout << "-1" << endl;
    else if(a  == 9 && b == 1){
        cout << a * 100 + 99 << " ";
        cout << b * 1000;
    }
    else if( a > b) cout << "-1" << endl;
    else if(b-a == 1){
        cout << a*100 + 99 << " ";
        cout << b *100;
    }
    else{
        cout << a * 100 + 44 << " ";
        cout << b * 100 + 45;
    }

  return 0;
}
