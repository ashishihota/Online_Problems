#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
        ll n, total, sum1 = 0,sum2 = 0;
        cin >> n;
        for(int i = 1; i <= n; i += 2) {
                sum1 += i;
        }
        for(int i = 2; i <= n; i += 2) {
                sum2 += i;
        }
        total = sum2 - sum1;
        cout << total;
        return 0;
}
