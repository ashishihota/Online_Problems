#include<bits/stdc++.h>
using namespace std;


typedef long long ll;
typedef pair<int, int> pii;
const int MOD = 1e9 + 7;

#define rep(i,b) for(i=0;i<b;++i)
#define repp(i,a,b) for(i=a;i<b;++i)

int main() {
    ll n,m,num;
    cin >> n >> m;
    string l;
    string vn[n +1], vm[m + 1];
    for(int i = 0; i < n; i++){
        cin >> l;
        vn[i +1 ] = l;
        // vn.push_back(l);
    }
    for(int i = 0; i < m; i++){
        cin >> l;
        vm[i+1] = l;
        // vm.push_back(l);
    }
    cin >> num;
    while (num--) {
        ll y, ny,my;
        cin >> y;
        ny = y % n;
        my = y % m ;
        if(ny == 0 && my == 0){
            cout << vn[n] + vm[m] << endl;
            continue;
        }
        if(ny == 0 && my != 0){
            cout << vn[n] + vm[my] << endl;
            continue;
        }
        if(my == 0 && ny != 0){
            cout << vn[ny] + vm[m] << endl;
            continue;
        }
        else
            {
        cout << vn[ny] + vm[my] << endl;
        }
    }
   return 0;
}
