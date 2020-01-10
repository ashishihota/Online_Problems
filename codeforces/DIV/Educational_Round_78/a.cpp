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
    while(n--){
        string p,h,ss;
        int len ,lenn, countt = 0;
        cin >> p >> h;
        len = p.length();
        lenn = h.length();
        sort(p.begin(),p.end());
        ss = h;
        sort(ss.begin(),ss.end());

        //cout << "---->sorted p = " << p<< endl;  //it is working
        for(int i = 0;i < lenn; i++){
            int num = 0;
            if(h[i] == p[0] || ss[i == p[0]]){
                string s = h.substr(i,len);
                sort(s.begin(), s.end());
                if(s.length() < len) continue;
                //cout << " -->> the substr = "<< s << endl;
                if(s == p){
                    countt = 1;
                    break;
                }
            }
        }
        if(countt == 1) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
  return 0;
}
