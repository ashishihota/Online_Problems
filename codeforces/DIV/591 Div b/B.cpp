#include<bits/stdc++.h>
typedef long long ll;
using namespace std;


int main(){
    set<char> s1,s2;
    int n;
    string s[2];
    cin >>n;
    while (n > 0) {
        cin >> s[0];
        cin >> s[1];
        for(int i = 0; i < s[0].length(); i++){
            s1.insert(s[0][i]);
        }
        for(int j = 0; j < s[1].length(); j++){
            s2.insert(s[1][j]);
        }
        if (s1 == s2) cout << "YES";
        else cout << "NO";
        n--;
    }

    return 0;
}
