#include <bits/stdc++.h>

using namespace std;


typedef long long ll;
typedef pair<int, int> pii;
const int MOD = 1e9 + 7;

#define rep(i,b) for(i=0;i<b;++i)
#define repp(i,a,b) for(i=a;i<b;++i)

string IntToString(int a)
{
    ostringstream temp;
    temp << a;
    return temp.str();
}

bool is_prime(int i){
        for(int j = 2; j * j <= i; ++j){
            if(i % j == 0){
                return false;
            }
        }
        return true;
}

int main() {
	ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n, m;
    cin >> n >> m;
    vector<int> v;
    for(int i = n;i < m; i++){
        if(is_prime(i)) v.push_back(i);
    }
    set<int> a;
    ll mx = 1, mn = 99999999999;
    for(int i = 0; i < (int)v.size(); i++){
        for(int j = i+1; j < (int)v.size(); j++){
            string s = IntToString(v[i]);
            string ss = IntToString(v[j]);
            s += ss;
            int num = stoi(s);
            if(is_prime(num)){
                a.insert(num);
                mx = max(mx, (ll)num);
                mn = min(mn, (ll)num);
            }
        }
        for(int j = i -1; j >= 0; j--){
            string s = IntToString(v[i]);
            string ss = IntToString(v[j]);
            s += ss;
            int num = stoi(s);
            if(is_prime(num)){
                a.insert(num);
                mx = max(mx,(ll)num);
                mn = min(mn, (ll)num);
            }
        }
    }
    ll len = a.size();
    for(int i = 1; i < len - 1; i++){
        ll x = mx;
        mx += mn;
        mn = x;
    }
    cout << mx;
    return 0;
}

