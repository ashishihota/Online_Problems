#include <array>
#include <cassert>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <queue>
#include <stack>
#include <list>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <algorithm>
#include <complex>
#include <cmath>
#include <numeric>
#include <bitset>
#include <functional>
#include <random>
#include <ctime>

using namespace std;


typedef long long ll;
typedef pair<int, int> pii;
const int MOD = 1e9 + 7;

#define rep(i,b) for(i=0;i<b;++i)
#define repp(i,a,b) for(i=a;i<b;++i)

void swap(int *xp, int *yp) {
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void bubbleSort(int arr[], int n){
   int i, j;
   bool swapped;
   for (i = 0; i < n-1; i++) {
     swapped = false;
     for (j = 0; j < n-i-1; j++){
        if ((arr[j] > arr[j+1]) && ((arr[j]) + arr[j + 1]) % 2 != 0) {
           swap(&arr[j], &arr[j+1]);
           swapped = true;
        }
     }
     if (swapped == false)
        break;
   }
}
int main() {
    ll n;
    cin >> n;
    while (n--) {
        string s;
        cin >> s;
        ll len = s.length();
        int v[len];
        for(int i = 0;i < len; i++){
            v[i] = int(s[i]) - 48;
        }
        bubbleSort(v, len);
        bubbleSort(v, len);
        bubbleSort(v, len);
        bubbleSort(v, len);
        for(int i = 0; i < len; i++){
            cout << v[i];
        }
        cout <<endl;
    }
  return 0;
}
