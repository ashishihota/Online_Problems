#include <bits/stdc++.h>
using namespace std;

const int MAX = 100;

void printBoundary(int a[][MAX], int m, int n)
{
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (i == 0 || j == 0 || i == n - 1 || j == n - 1)
                cout << a[i][j] << " ";
            else
                cout << " "
                     << " ";
        }
        cout << "\n";
    }
}

// Driver code
int main(){
    int n;
    cin >> n;
    char c;
    int a[n][n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n ;j++){
            cin >> c;
            int ic  = (int) c;
            a[i][j] = ic;
        }
    }
    printBoundary(a, 4, 4);
    return 0;
}
