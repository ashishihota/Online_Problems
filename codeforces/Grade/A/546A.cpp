#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k , w, cost = 0;
    int total = 0;
    n = k = w = 0;
    cin >> k; // cost of the first banana
    cin >> n; // initial no of dollar soldier has
    cin >> w; // banana he wants
    for (int i = 1; i <= w; i++){
        cost = i * k;
        total = total + cost;
    }
    if (n < total)
        cout <<(total - n);
    else
        cout << "0";

    return 0;
}


//3 17 4
// 13
