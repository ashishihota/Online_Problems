#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ll n, m, cnt = 0;
    cin >> n;
    if(n > 10){
        cnt = n /10;
        n %= 10;
    }
    if(n > 5){
        cnt += n / 5;
        n %= 5;
    }
    cnt += n;
    n -= n;
    cout << cnt;
    return 0;
}
