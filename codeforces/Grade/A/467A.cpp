#include<bits/stdc++.h>

using namespace std;

int main(){
    int n , r, p, countt = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> p >> r;
        if ((r - p > 1)) countt ++;
    }
    cout << countt;
    return 0;
}
