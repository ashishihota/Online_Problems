#include<bits/stdc++.h>

typedef long long ll;

using namespace std;

int main()  {
    // N = players  K = points at the begining   Q = Total answered
    int n, k, q,ans, inp;
    cin >> n>> k >> q;
    std::vector<ll> v(n,k -q);
    for (int i = 0; i < q; i++){
        cin >> inp;
        ans  = inp -1;
        v[ans] ++;
    }
    for (auto m: v) {
        if (m > 0) cout << "Yes\n";
        else cout<< "No\n";
    }
    return 0;
}
