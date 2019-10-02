#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, i = 0, countt = 0;
    vector<int> vi;
    cin  >> n;
    for (int i = 0; i < n; i++){
        cin >> vi[i];
    }

    sort(vi.begin(), vi.end());

    for(int j = vi.size() - 1, i ;j != i, i != j; i++, j--){
        if(vi[j] == 4){
            countt++;
            i-- ;
        }
        else if(vi[i] != 1 && vi[j] == 3){
            countt++;
            i--;
        }
        else if(vi[i] + vi[j] >= 2){
            countt++;
        }

    }
    cout << countt;
    return 0;
}
