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


typedef long long int ll;
typedef pair<int, int> pii;
const int MOD = 1e9 + 7;

#define rep(i,b) for(i=0;i<b;++i)
#define repp(i,a,b) for(i=a;i<b;++i)
int n,m;
int a[100000];
int b[100000];
ll sum = 0;

int main() {
    int t = 1,i, j, k;
    while(t--){
        scanf("%d",&n);
        for(int i = 0; i < n; i++){
            scanf("%d",&a[i]);
            b[i] = (a[i] % 2);
            a[i] /= 2;
            sum += a[i];
        }
        for(i = 0 ; i< n ; i++){
            if (sum < 0){
                if (b[i] == 1){
                    a[i]++;
                    sum++;
                }
            }
            else if(sum > 0){
                if(b[i] == -1){
                    a[i]--;
                    sum--;
                }
            }

        }
        for(int i = 0; i< n; i++)cout << a[i]<<endl;
    }
    return 0;
}
