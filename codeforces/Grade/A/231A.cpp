#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, countt = 0;
	cin >> n;
	int a,b,c = 0;
	while(n > 0){
        cin >> a >> b >> c;
        if(a + b + c  >= 2){
            countt++;
        }
        n--;
	}
    cout << countt;
	return 0;
}






