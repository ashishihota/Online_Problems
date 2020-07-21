#include <bits/stdc++.h>
using namespace std;

int printNcR(int n, int r)
{
    long long p = 1, k = 1;

    if (n - r < r)
        r = n - r;

    if (r != 0) {
        while (r) {
            p *= n;
            k *= r;
            long long m = __gcd(p, k);
            p /= m;
            k /= m;

            n--;
            r--;
        }
    }

    else
        p = 1;
    return p;
}

int main()
{
    int a, b, aa = 0, bb = 0;
    cin >> a >> b;
    if(a > 1)aa = printNcR(a, 2);
    if(b > 1)bb = printNcR(b, 2);
    cout << aa + bb;
    return 0;
}
