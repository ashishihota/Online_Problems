#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int, int> pii;
const int MOD = 1e9 + 7;

#define rep(i,b) for(i=0;i<b;++i)
#define repp(i,a,b) for(i=a;i<b;++i)

int main() {
    int n;
    cin >>n;
    string s,t;
    cin >> s >> t;
    for(int i = 0; i <n; i++){
        cout << s[i]<<t[i];
    }
    cout <<endl;
  return 0;
}
