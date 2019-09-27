#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, cnt, ans = 0;
	cin >> n;
	int a[n][3];
	for (int i = 0; i < n; i++){
        for (int j = 0; j < 3; j++){
             cin >> a[i][j];
        }
	}

		for (int i = 0; i < n; i++){
            for (int j = 0; j < 3; j++){
                if (a[i][j] == 1){
                    cnt++;
                }
        }
        if (cnt > 1)
            ans++;
        cnt = 0;
	}

    cout << ans;

	return 0;
}






