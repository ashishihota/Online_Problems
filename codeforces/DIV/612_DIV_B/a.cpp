#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

bool pal(string s){
	ll l = s.length() - 1;
	ll n = 0;
	while(n < l){
		if(s[n] != s[l]) return false;
		n++;
		l--;
	}
	return true;
}

int main(){
	string s;
	cin >> s;
	if(!(pal(s))) cout <<"Not Palindrome ";
	else cout << "Palindrome";
	return 0;
}
