#include <bits/stdc++.h>

using namespace std;

typedef long long lli;

int main(){
    signed int n , a, b, c = 0;
    lli  v1 = 0, v2 = 0,v3 = 0;
    cin >> n;
    while(n > 0){
        cin >> a >> b >> c;
        v1 += a;
        v2 += b;
        v3 += c;
        n--;

    }
    if (v1 == 0 && v2 == 0 && v3 == 0)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
