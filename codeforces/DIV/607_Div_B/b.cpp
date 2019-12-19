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
        int count = 0, len;
        string s1,s2,s3;
        cin >> s1 >> s2;
        if(s1 < s2){
            cout << s1 << endl;
            continue;
        }
        len = s1.length();
        s3 = s1;
        sort(s3.begin(), s3.end());
        for(int i = 0; i <len; i++ ){
            for(int j = i; j < len; j++){
                swap(s1[i],s3[j]);
                if(s1 < s2)
            }
        }
    }
  return 0;
}
