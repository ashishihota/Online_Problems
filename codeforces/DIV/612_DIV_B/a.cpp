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
        ll n, ls, cnt = 0, mx = 0;
        string s;
        bool flag = false;
        cin >> n >> s;
        ls = s.length();
        for(int i = 0; i < ls; i++){
            if(s[i] == 'A'){
                cnt = 0;
                flag = true;
                mx = max(mx, cnt);
            }
            else if(s[i] == 'P' && flag){
                cnt++;
                mx = max(mx,cnt);
            }
        }
        if(flag){
            cout << mx << endl;
        }
        else cout << "0"<<endl;
    }
  return 0;
}
