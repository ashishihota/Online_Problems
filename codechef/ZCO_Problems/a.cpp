#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int, int> pii;
const int MOD = 1e9 + 7;

int main() {
    ll n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    vector<int> pre(n);
    int mx = pre[n-1] = v[n-1]; 
    for(int i = n - 2; i >= 0; i--){
        pre[i] = v[i] * (n - i);
        mx =  max(mx, pre[i]);
    }
    cout << mx << endl;
  return 0;
}

