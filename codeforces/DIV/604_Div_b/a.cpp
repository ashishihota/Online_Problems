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
        string s;
        cin >> s;
        bool flag = true;
        for(int i = 0; i < s.length(); i++){
            if(s[i] == s[i +1] && (s[i] != '?')){
                cout << "-1"<< endl;
                flag = false;
                break;
            }
            else if(s[i] == '?'){
                if(i == 0){
                    if(s[i +1] != 'a'){
                        s[i] = 'a';
                    }
                    else if(s[i + 1]!= 'b'){
                        s[i] = 'b';
                    }
                    else s[i] = 'c';
                }
                else {
                    if(s[i- 1]!= 'a' && s[i +1] != 'a'){
                        s[i] = 'a';
                    }
                    if(s[i- 1]!= 'b' && s[i +1] != 'b'){
                        s[i] = 'b';
                    }
                    if(s[i- 1]!= 'c' && s[i +1] != 'c'){
                        s[i] = 'c';
                    }

                }
            }
        }
        if(flag)
            cout << s << endl;
    }
  return 0;
}
