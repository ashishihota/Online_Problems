#include <bits/stdc++.h>

using namespace std;

int main(){
    int i, n, countt = 0;
    string s;
    cin >> n >> s;
    for (i = 1; i < n; i++){
        if (s[i] == s[i - 1]){
            countt++;
        }
    }
    cout << countt ;
    return 0;
}
