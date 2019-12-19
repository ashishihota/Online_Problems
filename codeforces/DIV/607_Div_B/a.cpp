#include<bits/stdc++.h>
using namespace std;


typedef long long ll;
typedef pair<int, int> pii;
const int MOD = 1e9 + 7;

#define rep(i,b) for(i=0;i<b;++i)
#define repp(i,a,b) for(i=a;i<b;++i)

int main() {
    int n;
    cin >> n;
    while (n--) {
        /* code */
        string s;
        cin >> s;
        int len = s.length();
        if(s[len - 1] == 'u'){
            cout << "JAPANESE"<<endl;
        }
        else if(s[len-1] == 'o'){
            cout << "FILIPINO"<< endl;
        }
        else cout << "KOREAN"<<endl;
    }
  return 0;
}
