#include<bits/stdc++.h>

using namespace std;

int main(){

	int n; cin >> n;
	vector<int> v(n);

	int cnt = 0;

	for(auto& i : v){
		cin >> i;
	}

	int i = 0; 
	while(i < n - 1){
		if(v[i + 2] == 1){
			// cout << "+2 at i = "<< i << endl; 

			cnt += 2;
			i += 3;
		}
		else{
			// cout << "+1 at i = "<< i << endl;

			cnt++;
			i += 2;
		}
	}
	cout << cnt << endl;
}


/// 1   1    1
/// 0 0 0 0 [1 0]


// 	1  1         
/// 0  0 [1 0] 0 [1 0]

///  1        1       1 
/// [0 1] 0 [0 1] 0 [0 1] 0 0
// my_ans = 1 + 1 + 1 + (3 + 1) / 2 => 3 + 2 => 5