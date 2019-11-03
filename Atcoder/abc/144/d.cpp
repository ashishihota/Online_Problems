#include<bits/stdc++.h>
using namespace std;


typedef long long ll;
typedef pair<int, int> pii;
const int MOD = 1e9 + 7;

#define rep(i,b) for(i=0;i<b;++i)
#define repp(i,a,b) for(i=a;i<b;++i)

int main() {
    float a, b,x ,t, left, em,per;
    cin >> a >> b >> x;
    t = (a* a * b);
    left = (t - x);
    per = (left/t) * 100;
    em = 90/left;
    cout << (90/left);
  return 0;
}
