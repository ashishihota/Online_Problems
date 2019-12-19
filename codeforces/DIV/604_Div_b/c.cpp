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
    while(n--){
        int nn, g =0 , s = 0, b = 0, nm  = 0, m = 0, sb = 0;
        cin >> nn;
        int v[nn];
        for(int i = 0; i < nn;i++){
            cin >> v[i];
            if(i != 0){
                if(v[i] != v[i -1]){
                    if(g == 0){
                        g = v[i];
                    }
                    else if(s ==0){
                        s = v[i];
                    }
                    else if(b == 0){
                        b = v[i];
                    }
                }
            }
        }
        for(int i = 1; i < nn; i++){
            if(v[i] != v[i -1])
        }
        cout <<"ans = "<<  m << " "<<nm << " "<<g << " "<<s << " "<<b << " "<< sb<<endl;
    }
    return 0;
}
