#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

int main(){
    ll n, m;
    double cnt =  0; 
    cin >> n >> m;
    vector<pair<double, pair<double, double>>> vp;
    for(int i = 0; i < n; i++){
        ll a, b;
        cin >> a >> b;
        double avg = double(a/b);
        vp.push_back(make_pair(avg, make_pair(a,b)));
    }
    sort(vp.begin(), vp.end());
    reverse(vp.begin(), vp.end());
    for(auto i : vp){
        if(( m - i.second.second) >= 0){
            m -= i.second.second;
            cnt += i.second.first;
        }else{
            cnt = cnt + i.second.first * double(m/i.second.second);
            m -= m;
        }
    }
    cout << cnt ;
    return 0;
}
