#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, cnt =0,tmp;
    cin >> n;
    for (int i = 5; i > 0; i--){
        tmp = n / i;
        cnt += tmp;
        n  = n % i;
    }
    cout << cnt;
    return 0;
}
