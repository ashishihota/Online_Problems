#include<bits/stdc++.h>

using namespace std;

typedef long long int ll

// This is a method to calculate the pisano number of a given number. Because the pisano
// number of a number shows us when the last digit of a number starts to repet in a fibb
ll pisano(ll n){
    ll a = 0, b = 1, c = 1;
    for(int i = 0;i < n*n; i++){
        c = (a+b) % n; 
        a = b;
        b = c;
        if(a == 0 && b == 1) return i+1;
    }
    return 0;
}

int main(){
    ll n, m;
    cin >> n >> m;
    n %= pisano(m);
    ll f = 0, s = 1; 
    for(int i = 0; i < n; i++){
        ll temp = f % m;
        f += s % m;
        s = temp;
    }
    cout << f % m;
    return 0;
}


