#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int, int> pii;
const int MOD = 1e9 + 7;

#define rep(i,b) for(i=0;i<b;++i)
#define repp(i,a,b) for(i=a;i<b;++i)

const int MAX = 100;

std::vector<char> spiralPrint(int m, int n, char a[][MAX]) {
    int i, k = 0, l = 0;
    std::vector<char> v;
    while (k < m && l < n) {
        for (i = l; i < n; ++i) {
            v.push_back(a[k][i]);
        }
        k++;

        for (i = k; i < m; ++i) {
            v.push_back(a[i][n - 1]);
        }
        n--;

        if (k < m) {
            for (i = n - 1; i >= l; --i) {
                v.push_back(a[m - 1][i]) ;
            }
            m--;
        }

        if (l < n) {
            for (i = m - 1; i >= k; --i) {
                v.push_back( a[i][l]);
            }
            l++;
        }
    }
    return v;
}

std::vector<string> print;

void solve(vector<char> v, int p){
    int n = v.size();
    string b[(2 * n)];

    for (int i = 0; i < n; i++)
        b[i] = b[n + i] = v[i];

    for (int i = p; i < n  +p; i++)
            //cout << b[i] << " ";
            print.push_back(b[i]);
        cout <<endl;
}

void printf(){
    for(auto i: print) cout <<i << " ";
}

int main() {
    ll n;
    cin >> n;
    char c;
    char a[MAX][MAX];
    std::vector<char> v , vv;
    std::vector<int> pos;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n ;j++){
            cin >> c;
            a[i][j] = c;
        }
    }
    cout << endl << endl;
    v = spiralPrint(n,n,a);
    int  x = 0, mm, p;
    for(int i = n; i >1; i -= 2){
        mm = 0 , p = 0;
        std::vector<char> w;   // contains the array sending to solve
        int cnt = (i*4) -4;
        for(int j = 0; j < cnt; j ++){
            if(v[j + x] == 'X'){
                p = j;
            }
            w.push_back(v[j + x]);
            mm++;
        }
        solve(w,p);
        if(p > mm/2){
            pos.push_back(p-mm);
        }
        else pos.push_back(p);
        x += mm;
    }
     for(auto i: pos) cout << i << " ";
  return 0;
}



/*
5

O I M U R

J V U X A

X W T S R

K Z F H D

Q W K V M


*/
