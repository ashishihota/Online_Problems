#include<bits/stdc++.h>
using namespace std;


typedef long long ll;
typedef pair<int, int> pii;
const int MOD = 1e9 + 7;

#define rep(i,b) for(i=0;i<b;++i)
#define repp(i,a,b) for(i=a;i<b;++i)

int main() {
    long long n,m, count = 0;
    std::vector<long long> v;
    cin >> n >> m;
    if(n == 1 &&  m == 1){
        cout << "1" << endl;
    }
    else if(n % 2 == 1) cout << " -1" << endl;
    else {
        for(int i = 1; i < n;i++){
        if(n % i == 0){
            v.push_back(i);
            count++;
        }
        if(count > m) break;
        }
        if(count < m){
            cout << "-1"<<endl;
        }
        else {
            cout<< v[m -1 ];
        }
    }
  return 0;
}
