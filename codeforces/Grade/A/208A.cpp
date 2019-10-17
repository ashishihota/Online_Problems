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
    std::vector<char> v;
    cin >>s;
    for (int i = 0; i < s.length(); i++){
        if (s[i] == 'W' && s[i+1] == 'U' && s[i + 2] == 'B' ){
            i+= 2;
            v.push_back(' ');
            continue;
        }
        else v.push_back(s[i]);
    }
    for (auto i: v) cout << i;
  return 0;
}
