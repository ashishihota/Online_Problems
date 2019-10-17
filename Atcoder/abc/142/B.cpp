#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, h, cnt = 0, f;
    cin >> n >> h;
    while(n > 0){
        cin >> f;
        if ( f >= h) cnt++;
        n--;
    }
    cout << cnt;
    return 0;
}
