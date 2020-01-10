#include<bits/stdc++.h>
using namespace std;


typedef long long ll;
typedef pair<int, int> pii;
const int MOD = 1e9 + 7;

#define rep(i,b) for(i=0;i<b;++i)
#define repp(i,a,b) for(i=a;i<b;++i)

int main() {
    int n, sum =  0;
    cin >> n;
    std::vector<ll> v;
    for(int i = 1; i < 100000; i++){
        sum += i;
        v.push_back(sum);
    }
    while (n--) {
        int a, b, diff;
        cin >> a >> b;
        diff = abs(b - a);
        cout << "diff = " << diff << endl;
        for(int i = 0;i < v.size(); i++){
            if(a == b){
                cout <<"0"<< endl;
                break;
            }
            if(v[i] == diff){
                cout << i+ 1<<endl;
                break;
            }
        }

    }
  return 0;
}
