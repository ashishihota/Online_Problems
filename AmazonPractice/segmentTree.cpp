#include<bits/stdc++.h>

using namespace std;

int N = 1000001;
int n;
int t[1000000];

void build(){
    for(int i = n - 1; i >= 0; --i) t[i] = t[i << 1] + t[i << 1 | 1];
}

void modify(int p, int val){
    for(t[p+=n] = val; p > 1; p >>= 1){
        t[p>>1] = t[p] + t[p^1];
    }
}

void display(){
    cout << "\n----------------------------------"<<endl;
    for(int i = 0; i < n * 2; i++) cout << t[i] << " "; cout << endl;
}

int main(){
    cin >> n;
    for(int i = 0; i < n; ++i) scanf("%d", t + n + i);
    build();
    display();
    modify(2, 10);
    display();
    return 0;

}
