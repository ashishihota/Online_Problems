#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


ll maxvolume(int s)
{
    // finding length
    ll length = s / 3;

    s -= length;

    // finding breadth
    ll breadth = s / 2;

    // finding height
    ll height = s - breadth;
    return length * breadth * height;
}

int main()
{
    ll n;
    cin >> n;
    ll ans = maxvolume(n);
    cout << ans;
    return 0;
}
