#include<bits/stdc++.h>

using namespace std;

int main(){
    int n = 0, total = 1, a[3], count = 0;
    while (n < 3){
      cin >> a[n];
      if (a[n] == 1) count++;
      n++;
    }

    if (count == 3){
      cout << 3;
      return 0;
    }

    else if (count == 2 && a[1] != 1){
      cout << a[0] + a[1] + a[2];
      return 0;
    }

    else if (count == 2){
      int mx;
      mx = max(a[0], a[2]);
      cout <<  mx*2;
      return 0;
    }

    else if(a[1] == 1){
      int mn , mx;
       mn = min(a[0], a[2]);
       mx = max(a[0], a[2]);
      cout << (mn + 1 ) * mx;
      return 0;
    }

    else if(a[0] == 1){
      cout << (a[1] + 1) * a[2];
      return 0;
    }

    else if(a[2] == 1){
      cout << (a[1] + 1) * a[0];
      return 0;
    }
    else cout << a[0] * a[1] * a[2];

    return 0;
}
