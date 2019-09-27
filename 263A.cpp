#include <bits/stdc++.h>

using namespace std;

int main(){
    int a[5][5];
    signed int countr, countc = 0;
    int i, j, r, c, tot = 0;
    int n =5;

    for (int i = 0; i <5; i++ ){
        for (int j = 0; j < 5; j++){
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            if(a[i][j] ==1){
                r = j;
                c = i;
            }
        }
    }


   if(r >= 2){
        countr = r - 2;
    }
    else
        countr = 2 - r;


    if(c >= 2){
        countc = c - 2;
    }
    else
        countc = 2 - c;

    tot = countc + countr;
    cout << tot;


    return 0;
}

