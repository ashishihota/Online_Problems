#include <bits/stdc++.h>

using namespace std;


typedef long long ll;
typedef pair<int, int> pii;
const int MOD = 1e9 + 7;

#define rep(i,b) for(i=0;i<b;++i)
#define repp(i,a,b) for(i=a;i<b;++i)

int main() {
	ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n;
    cin >> n;
    char a[n][n];
    vector<int> left(n), down(n);

    for(int i = 0; i < n; i++){
        int cnt = 0;
        for(int j = 0; j < n; j++){
            cin >> a[i][j];
            if(a[i][j] == 'D') cnt++;
        }
        left[i] = cnt;
    }
    for(int i = 0; i < n; i++){
        int cnt = 0;
        for(int j = 0; j < n ; j++){
            if(a[j][i] == 'D') cnt++;
        }
        down[i] = cnt;
    }

    int cnt = 0;

   // cout << "down matrix = ";   for(auto i : down) cout << i << " "; cout << endl;
   // cout << "left matric = ";   for(auto i : left) cout << i << " "; cout << endl;
    vector<int> sq1(n), sq2(n);

    // calculating the maximum square
    int ans = 0;
    for(ll i = 0; i < n; i++){
        ll di = down[i];
        ll mx = 0;
        cnt = 0;
        ll limit = min(di, n-i);
        for(int j = 0; j < limit; j++){
            cnt++;
            if(down[j+i] >= cnt){
                sq1[i] = cnt;
                continue;
            }
            else{
                break;
            }
        }
    }
    
    for(ll i = 0; i < n; i++){
        ll li = left[i];
        ll mx = 0;
        cnt = 0;
        ll limit = min(li, n-i);
        for(int j = 0; j < limit; j++){
            cnt++;
            if(left[j+i] >= cnt){
                sq2[i] = cnt;
                continue;
            }
            else{
                break;
            }
        }
    }
    
    ll answer = 0;
    for(ll i : sq1)answer = max(answer, i);
    for(ll i : sq2)answer = max(answer, i);
    cout << answer;
    return 0;
}

