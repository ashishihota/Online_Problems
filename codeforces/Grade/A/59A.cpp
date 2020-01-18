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
    string s;
    cin >> s;
    ll cap = 0, sml = 0;
    for(int i = 0; i < s.length(); i++){
        if(s[i]>='A' && s[i]<='Z') cap++;
        else sml++;
    }
    // cout << s<<endl;
    if(cap > sml) for(int i = 0;i < s.length(); i++) cout << char(toupper(s[i]));
    else for(int i = 0; i < s.length(); i++) cout << char(tolower(s[i]));

  return 0;
}
