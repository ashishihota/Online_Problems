#include<bits/stdc++.h>
using namespace std;


typedef long long ll;
typedef pair<int, int> pii;
const int MOD = 1e9 + 7;

#define rep(i,b) for(i=0;i<b;++i)
#define repp(i,a,b) for(i=a;i<b;++i)

int main() {
    ll num;
    cin >> num;
    while (num--) {
        ll n ,yas = 0, adel = 0,cnt;
        cin >> n;
        ll v[n] ,sum1 = 0, sum2 = 0, best1 = 0,best2 = 0;
        for(int i = 0; i < n; i++){
            cin >> v[i];
            yas += v[i];
        }
        for(int i = 0; i < n -1; i++){
            sum1 = max(v[i], sum1+v[i]);
            best1 = max(best1 , sum1);
        }
        for(int i = 1; i < n; i++){
            sum2 = max(v[i], sum2+v[i]);
            best2 = max(best2, sum2);
        }
        if(yas > best1 && yas > best2) cout << "YES" <<endl;
        else cout <<"NO"<<endl;
    }
  return 0;
}
