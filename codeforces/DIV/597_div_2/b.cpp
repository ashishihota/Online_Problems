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
        ll num, ar,bp = 0, ap, as;
        cin >> num;
        cin >> ar >> ap >> as;
        string s ,ns ="";
        cin >> s;
        for(int i = 0; i < s.length(); i++){
            if(s[i] == 'R'){
                if(ap > 0){
                    ap--;
                    ns += "P";
                    bp ++ ;
                }
            }
            if(s[i] == 'P'){
                if(as > 0){as--;
                bp++;
                ns += "S";
                }
            }
            if(s[i] == 'S'){
                if(ar > 0){ar--;
                bp++;
                ns += "R";
                }
            }

        }
        if(bp >= ceil(double(num) / 2)){
            cout << "YES" << endl;
            cout << ns << endl;
        }
        else cout <<"NO"<< endl;
    }


  return 0;
}
