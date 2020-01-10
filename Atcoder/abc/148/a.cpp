#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int, int> pii;
const int MOD = 1e9 + 7;

#define rep(i,b) for(i=0;i<b;++i)
#define repp(i,a,b) for(i=a;i<b;++i)

int main() {
    int a,b;
    cin >> a >> b;
    if(a+b == 3) cout << 3 <<endl;
    else if (a+b == 4) cout << 2 <<endl;
    else cout << 1 <<endl;
  return 0;
}
