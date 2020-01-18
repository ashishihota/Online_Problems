#include<bits/stdc++.h>
//#include <boost/math/common_factor.hpp>
using namespace std;


typedef long long ll;
typedef pair<int, int> pii;
const int MOD = 1e9 + 7;

#define rep(i,b) for(i=0;i<b;++i)
#define repp(i,a,b) for(i=a;i<b;++i
int lcm(int a, int b)
{
   return (a*b)/__gcd(a, b);
}

int main() {
    //boost::math::lcm(10,20)
    ll n , num = 0, i = 0;
    cin >> n;
    for( i = sqrt(n) +1; i >0;i--){
        if(n % i == 0){
            ll s = n/i;
            if(lcm(s,i) == n){
                cout << s << " " <<i<<endl;
                //if(lcm(i,s) == n) cout << s << " "<<i << endl;
                break;
            }
        }
    }
  return 0;
}
