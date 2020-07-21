#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

int main(){
    ll dis, avg, n;
    cin >> dis >> avg >> n;
    vector<ll> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    ll prev = v[0], curr = 999999, cnt = 0;
    for(int i = 1; i < n; i++){
        curr = v[i];
        ll run = curr - prev; 
        cout << " run = " << run << endl;
        if(run > avg){
            cout << "adding at prev and curr = " << prev << "  " << curr << endl;
            prev = v[i];
            curr = v[i];
            cnt++;
        }
    }
    cout << cnt << " -- this should be the answer";
    return 0;
}
