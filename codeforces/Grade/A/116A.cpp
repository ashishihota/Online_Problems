#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, a, b, rem = 0, tot = 0;
    cin >> n;
    while(n > 0){
        cin >> a >> b;
        rem = rem - a;
        rem = rem + b;
        if (rem >= tot )
            tot = rem;
        n--;
    }
    cout <<(int)tot;

    return 0;
}


