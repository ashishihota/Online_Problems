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
    int n;
    cin >> n;
    char a[n][n];
    vector<int> left(n+1), down(n+1);

    down[0] = 0; left[0] = 0;

    for(int i = 0; i < n; i++){
        int cnt = 0;
        for(int j = 0; j < n; j++){
            cin >> a[i][j];
            if(a[i][j] == 'C') cnt++;
        }
        left[i+1] = cnt;
    }
    for(int i = 0; i < n; i++){
        int cnt = 0;
        for(int j = 0; j < n ; j++){
            if(a[j][i] == 'C') cnt++;
        }
        down[i+1] = cnt;
    }

    int cnt = 0;

    for(int i = 1; i <= n; i++){
        down[i] = n - down[i];
        left[i] = n - left[i];
    }


    cout << "down matrix = ";   for(auto i : down) cout << i << " "; cout << endl;
    cout << "left matric = ";   for(auto i : left) cout << i << " "; cout << endl;
    vector<int> sq1(n), sq2(n);


    for(int i = 1; i <= n; i++){
        cnt = 0;
        int di = down[i];
        for(int j = 0; j < di; j++){
            if(down[i+j] < j+1) break;
            else cnt++;
        }
        sq1[i] = cnt;
    }
    

    for(int i = 1; i <= n; i++){
        cnt = 0;
        int di = left[i];
        for(int j = 0; j < di; j++){
            if(left[i+j] < j+1) break;
            else cnt++;
        }
        sq2[i] = cnt;
    }

    for(auto i : sq1)cout << i << " "; cout << endl;
    for(auto i : sq2)cout << i << " "; cout << endl;
    int ans = 0;

    for(int i = 0; i < n; i++){
        ans = max(ans, max(sq1[i], sq2[i]));
    }
    cout << ans;

    return 0;
}
