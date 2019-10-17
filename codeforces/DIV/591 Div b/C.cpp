#include<bits/stdc++.h>
typedef long long ll;
using namespace std;


int main(){
    ll num,tot;
    cin >> num;
    set<ll> s;
    while (num > 0) {
        cin >> tot;
        ll a[tot];
        for(int i = 0; i < tot; i++){
            s.insert(a[i]);
        }

        num --;
    }
    return 0;
}
