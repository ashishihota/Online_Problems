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
        ll s, w, ww, www;
        cin >> s >> w >>ww >>www;
        if(w + ww +www <= s){
            cout << "1" <<endl;
        }
        else{
            if(w + ww <= s || w + www <= s || ww + www <= s){
                cout <<"2"<<endl;
            }
            else cout << "3" <<endl;
        }
    }

  return 0;
}
