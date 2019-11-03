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
    ll n ;
    cin >> n;
    while(n--){
        string s, res ="",se ="";
        cin >> s;
        if(s.length() == 1) {
            res += s;
        }
        else{
            for(int i = 0;i < s.length(); i++){
                if(s[i] != s[i + 1]){
                    se += s[i];
                }
                else {
                    i++;
                }
            }
        }
        sort(se.begin() , se.end());
        for(int i = 0;i < se.length(); i++){
            if(se[i] != se[i + 1]){
                res += se[i];
            }
        }
        cout << res << endl;
    }

  return 0;
}
