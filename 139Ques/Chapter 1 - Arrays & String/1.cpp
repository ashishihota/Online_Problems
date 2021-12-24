/*
 * PART 1 :- 
 * WAP to check if all the characters of a string are unique
 */


#include<bits/stdc++.h>

using namespace std;

bool check(string s){
    int arr[26];

    for(char i : s){
        arr[i - '0']++;
        if(arr[i - '0'] == 2) return true;
    }

    return false;
}
int main(){
    string s;
    cin >> s;
    cout << check(s) ? "YES" : "NO"; 
    return 0;
}



/*
 * PART 2 :-
 * Try to not use any other data structure
 */
