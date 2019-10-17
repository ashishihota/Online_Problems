#include<bits/stdc++.h>

using namespace std;

int main()  {
    int flag = 0;
    string s;
    cin >> s;
    for(int i = 1; i <= s.length(); i++) {
        if (i % 2  == 1){
            if((s[i - 1] == 'R' || s[i - 1] == 'U' || s[i - 1] == 'D' ))
                flag = 1;
            else {
                flag = 0;
                break;
            }
        }
     if (i % 2  == 0){
            if((s[i - 1] == 'L' || s[i - 1] == 'U' || s[i - 1] == 'D' ))
                flag = 1;
            else {
                flag = 0;
                break;
            }
        }
    }
    if(flag == 0) cout << "No";
    else cout << "Yes";
    return 0;
}
