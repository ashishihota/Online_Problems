#include<bits/stdc++.h>
using namespace std;


typedef long long ll;
typedef pair<int, int> pii;
const int MOD = 1e9 + 7;

#define rep(i,b) for(i=0;i<b;++i)
#define repp(i,a,b) for(i=a;i<b;++i)

int main() {
    ll n, l = 0, r = 0;
    cin >>n;
    string s;
    cin >> s;
    for(int i = 0; i < s.length(); i++){
        if(s[i] == 'L') l++;
        else if(s[i] == 'R') r++;
    }
    cout << l+r+1<<endl;

  return 0;
}
