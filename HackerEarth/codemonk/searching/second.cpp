#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ll n ,x, num = 0,y;
    cin >> n;
    int a[n];
    for(int i = 0; i< n; i++){
        cin >> a[i];
    }
    sort(a , a +n);
    cin >> num;
    while (num--) {
        cin >> y >> x;
        ll cnt = 0,i, point;
        if(x < a[n/2]){
             i = 0;
             point = n/2;
         }
        else if(x >= a[n/2]) {
            point = n;
            i = n/2;
        }
        if(y == 0){
            for(i = 0;i < point; i++){
                if(a[i] >= x) cnt++;
            }
        }
        else{
            for(i = 0;i < point; i++){
                if(a[i] >x) cnt ++;
            }
        }
        cout <<cnt << endl;
    }

    return 0;
}
