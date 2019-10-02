#include<bits/stdc++.h>

using namespace std;

int main(){
    string s;
    int a;
    cin >> s;
    vector<int> v;
    for (int i = 0; i < s.length(); i++){
        if(s[i] == '1' ||s[i] == '2' ||s[i] == '3'){
            a = s[i] - 48;
            v.push_back(a);
        }
    }
    sort(v.begin(), v.end());
    for(int i = 0; i < (v.size() - 1); i++){
        cout << v[i] << "+";
    }
    cout << v[v.size() -1];

    return 0;
}
