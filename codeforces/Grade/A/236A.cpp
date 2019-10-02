#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main(){
    string s,ps;
    int countt = 0;
    cin >> s;
    sort(s.begin(), s.end());
    for(int i = 0; i < s.length(); i++){
        if (s[i] != s[i + 1]){
            ps += s[i];
        }
    }
    if (ps.length() %2 == 0)
        cout << "CHAT WITH HER!";
    else
        cout << "IGNORE HIM!";
    return 0;
}
