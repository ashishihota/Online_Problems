#include<bits/stdc++.h>
typedef long long ll;
using namespace std;


int main(){
    ll n, num,count = 0;
    cin >> count;
    for (int i = 0; i < count; i++){
        cin >> n;
        if(n > 2 ){
            if((n % 2) == 0){
                num = 0;
            }
            else {
                num = 1;
            }
        }
        else if (n == 2) num = 2;
        else if (n == 1) num = 3;
        cout<<num << endl;
    }

    return 0;
}
