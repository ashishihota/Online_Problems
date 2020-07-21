#include <bits/stdc++.h>

typedef long long ll;

using namespace std;


int main(){
    ll stud, team, rank;
    cin >> stud >> team;
    std::vector<ll> v;
    set<ll> s;
    for(int i = 0; i < stud; i++){
        cin >> rank;
        if(s.count(rank)) continue;
        else {
            s.insert(rank);
            v.push_back(i);
        }
    }
    if(v.size() < team){
        cout << "NO\n" << endl;

    }
    else {
        cout << "YES\n";
        for(int i = 0; i < team; ++i){
            cout <<v[i] + 1<< " ";
        }
        cout << endl;
    }
    return 0;
}
