#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
	int t;
	cin >> t;
	while(t--){
		std::vector<int> v(3);
		for(int i = 0; i < 3; i++){
			cin  >> v[i];
		}
		ll ans;
		bool flag = false;
		sort(v.begin(), v.end());
		for(int i = 1; i < 3; i++){
			if(v[i] - v[i-1] > 1) {
				ans = v[i] - 1;
				flag = true;
				break;
			}
		}
		if(!flag) ans = v[2] + 1;
		cout << ans << endl;
	}
	return 0;
}
