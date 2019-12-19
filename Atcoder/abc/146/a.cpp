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

int main() {
	string s;
	cin >> s;

	// SUN, MON, TUE, WED, THU, FRI, or SAT.


	 if(s == "SAT"){
		cout <<"1"<<endl;
	}
	else if(s == "FRI"){
		cout <<"2"<<endl;
	}
	else if(s == "THU"){
		cout <<"3"<<endl;
	}
	else if(s == "WED"){
		cout <<"4"<<endl;
	}
	else if(s == "TUE"){
		cout <<"5"<<endl;
	}
	else if(s == "MON"){
		cout <<"6"<<endl;
	}
	else if(s == "SUN"){
		cout <<"7"<<endl;
	}

  return 0;
}
