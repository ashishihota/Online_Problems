#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
    ll a, b, ex, no, count = 0;
    cin >> ex >> no;
    priority_queue <ll> q;
    q.push(ex);
    q.push(no);
    bool cond = true;
    while(cond){
        a = q.top();
        if(a < 2){
            cond = false;
            break;
        }
        q.pop();
        b = q.top();
        if (b < 1) {
            cond = false;
            break;
        }
        q.pop();
        a = a -2;
        b --;
        count++;
        q.push(a);
        q.push(b);
    }
    cout<< count;
    return 0;
}
