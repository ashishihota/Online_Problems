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
    while (n--) {
        ll a, b;
        cin >> a >> b;
        string s;
        cin >> s;
        ll cnt = 0;
        for(int i = 0; i < a -1; i++){
            if(s[i] == '1' && s[i+1] == '0'){
                char c = s[i];
                s[i] = s[i+1];
                s[i +1] = c;
                i = -1;
                cnt ++;
            }
            if (cnt == b) break;
        }
        cout << s << endl;
    }
    return 0;
}
