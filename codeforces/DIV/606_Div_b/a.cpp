#include<bits/stdc++.h>
using namespace std;


typedef long long ll;
typedef pair<int, int> pii;
const int MOD = 1e9 + 7;

#define rep(i,b) for(i=0;i<b;++i)
#define repp(i,a,b) for(i=a;i<b;++i)

int main() {
    std::vector<long long> v;
    int num = 1;
    int n = 2;
    for(int i  = 1; i < 10; i++){
        for(int j = 1; j < 10; j++){
            v.push_back(num);
            num = (num * 10) + i;
        }
        num = 0;
        num  = n;
        n++;
    }
    sort(v.begin(), v.end());
    int nn;
    cin >> nn;
    bool hello = true;
    while (nn--) {
        int k,cnt = 0,m = 1, i = 0;
        cin >> k;
        for(int i = 0;i < k;i++){
            m = v[i];
            if(m > k) break;
            else cnt++;
        }
        cout << cnt<< endl;
    }
  return 0;
}
