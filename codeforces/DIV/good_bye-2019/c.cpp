#include<bits/stdc++.h>
using namespace std;


typedef long long ll;
typedef pair<int, int> pii;
const int MOD = 1e9 + 7;

#define rep(i,b) for(i=0;i<b;++i)
#define repp(i,a,b) for(i=a;i<b;++i)

int main() {
    ll n, fat = 0, car = 0, fib =0;
    cin >> n;
    ll v[n];
    string s,ss;
    for(int i = 0; i < n; i++){
        cin >> s;
        ss = s.substr(0,3);
        if(ss == "FAT"){
            v[i] = 1;
        }
        else if(ss == "CAR"){
            v[i] = 2;
        }
        else if(ss == "FIB"){
            v[i] = 3;
        }
        else v[i] = 0;
    }
    for(int i = 0; i < n; i++){
        if(v[i] == 1) fat++;
        if(v[i] == 2) car++;
        if(v[i] == 3) fib++;
        if(fat > 1){
            if(car > 0){
                cout << "1 ";
                fat -= 2;
                car--;
                continue;
            }
            if(fib > 0){
                cout<< "1 ";
                fat -= 2;
                fib --;
                continue;
            }
        }
        if(fib > 1){
            if(car > 0){
                cout << "1 ";
                car--;
                fib -= 2;
                continue;
            }
            if(fat > 0){
                cout << "1 ";
                fat--;
                fib -=2;
                continue;
            }
        }
        if(car > 1){
            if(fat > 0){
                cout << "1 ";
                fat--;
                car -= 2;
                continue;
            }
            if(fib > 0){
                cout << "1";
                fib--;
                car -=2;
            }
        }
        else cout << "0 ";
    }
  return 0;

}

/*
5
FATOIL FIBERSpinach CARBRice FATCHEESE FIBERBEANS
00010

*/
