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
    ll num, n;
    std::vector<ll> v, v1,pwr;
    cin >> num;
    for(int i = 0;i < 21; i++){
        v.push_back(pow(3,i));
    }
    for(int i =0;i < v.size(); i++){
        ll sum = 0;
        for(int j = i; j < v.size(); j++){
            sum += v[j];
            v1.push_back(sum);
        }
    }

    sort(v1.begin(), v1.end());
    while (num--) {
        ll count = 0;
        bool flag = false;
        cin >> n;
        if(n < 1){
            cout << "1"<< endl;
            continue;
        }
        for(int i = 0; v1[i] <= n; i++){
            if(v1[i] == n) flag = true;
            else{
                flag = false;
                count = i;
            }
        }
        if(flag){
            cout << n << endl;
        }
        else cout << v1[count + 1] << endl;
    }
  return 0;
}
