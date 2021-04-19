#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define se second
#define fi first
using namespace std;
 
const long long N = 5e5 + 7;
const long long M = 1007;
const ll mod = 1e9 + 7;
 
int t;
int n, x;
int a[N];
int main(){
    scanf("%d", &t);
    while(t--){
        bool haveans = true;
        scanf("%d%d", &n, &x);
        for(int i = 1; i <= n; i++){
            scanf("%d", &a[i]);
        }
        int ans = 0;
        for(int i = 1; i < n; i++){
            if(a[i] <= x && a[i] > a[i + 1]){
                puts("-1");
                haveans = false;
                break;
            }
            if(a[i] > a[i + 1]){
                int posnow = 1;
                for(int j = i - 1; j >= 1; j--){
                    if(a[j] <= x){
                        posnow = j + 1;
                        break;
                    }
                }
                for(int j = posnow; j <= i; j++){
                    swap(a[j], x);
                }
                if(a[i] > a[i + 1]){
                    puts("-1");
                    haveans = false;
                    break;
                }
                ans += (i - posnow + 1);
            }
        }
        if(!haveans){
            continue;
        }else{
            printf("%d\n", ans);
        }
    }
}