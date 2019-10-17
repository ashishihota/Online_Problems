#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
    ll n, num1, num2;
    cin >> n;
    while(n--){
        cin >> num1 >> num2;
        if (num1 - num2 <= 1) cout << "NO\n";
        else cout <<"YES\n";
    }
    return 0;
}
