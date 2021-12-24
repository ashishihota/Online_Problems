#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, m;
	cin >> n >> m;
	int temp = n + m;
	n = temp - max(n , m);
	m = temp - min(n, m);
	m++;
	int remain = n % m;
	n -= remain;
	// cout << n << " " << remain << " " << m << endl;
	int tot = n / m;
	int ans = remain == 0 ? tot : tot + 1;
	cout << ans << endl;
}