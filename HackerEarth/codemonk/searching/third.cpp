#include<bits/stdc++.h>

using namespace std;

bool check(char a){
    if(a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u') return true;
    return false;
}

typedef long long ll;

int main(){
    string s;
    ll n;
    cin >> n;
    while(n--){
        cin >> s;
        ll cnt  = 0;
        for(int i  = 0;i < s.length(); i++){
            if(check(tolower(s[i]))) cnt++;
        }
        cout << cnt << endl;
    }
    return 0;
}
