#include<bits/stdc++.h>

using namespace std;

int main(){

	int n, m;
	cin >> n >> m;
	m++;
	int rem = n / m;
	int tot = rem * m;
	int ans = tot == n ? rem : rem + 1;
	cout << ans << endl;
}