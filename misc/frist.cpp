#include<bits/stdc++.h>

using namespace std;

int n;

string solve(int *arr){
    arr[0] = 1;
    for(int i = 1; i < n; i++){
        int j = arr[i - 1];
        if(j > arr[i]){
            cout << " j = " << j << " arr[i] = " << arr[i] << endl;;
            return "NO";
        }
        int k = j + 1;
        while(k < arr[i]){
            if(arr[i] % k == 0){
                arr[i] = k;
                break;
            }
            k++;
        }
        if(arr[i] == j) {
            return "NO";
        }
    }
    return "YES";
}
int main(){
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << solve(arr);
    return 0;
}
