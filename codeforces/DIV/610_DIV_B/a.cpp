#include<bits/stdc++.h>
using namespace std;


typedef long long ll;
typedef pair<int, int> pii;
const int MOD = 1e9 + 7;

#define rep(i,b) for(i=0;i<b;++i)
#define repp(i,a,b) for(i=a;i<b;++i)

int main() {
    ll n;
    cin >>n;
    while (n--) {
        ll bmx, amn, aa,bb,a,b,c,r;
        std::vector<ll> v,v2;
        cin >> aa >> bb >> c >>r;
        a = min(aa,bb);
        b = max(aa,bb);
        // min and max points of the rad
        ll mn = min(c+r,c-r);
        ll mx = max(c-r,c+r);
        if(mn> b ||  mx< a){
            cout <<"ans =" <<  b-a <<endl;
            continue;
        }
        else{
            bmx = mx - b;
            amn = a - mn;
        }
        cout<<"Ans = "<<abs(bmx + amn)<<endl;
    }
    return 0;
}
