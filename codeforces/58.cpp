#include <bits/stdc++.h>

using namespace std;

int main(){
    string s , ns, o = "hello";
    int i = 0; int j = 0;
    cin >> s;
    for (; i < 6,j < s.length(); i++,j++){
        if (s[j] == o[i]){
            ns += s[j];
        }
        else
            i--;

    }
    if( ns == "hello"){
        cout << "YES";
    }
    else
        cout << "NO";
    return 0;
}
