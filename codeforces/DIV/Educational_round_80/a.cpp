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
        ll n ,d, x, ans, best = 100010001;
        cin >> n >> d;
        if(n >= d) cout << "YES"<<endl;
        else {
            for(int i = d -1;  i > sqrt(d); i--){
                x = ceil(n/(i+1));
                ans = x + i;
                cout << " i = " << i<<" x  = "<< x<<"  ans = "<<ans <<endl;
                best =  min(ans, best);
            }
            cout << best <<" BEST "<<endl;
            if(best <= n) cout << "YES" <<endl;
            else cout << "NO"<<endl;
        }

    }

  return 0;
}
