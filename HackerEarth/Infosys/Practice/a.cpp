#include <bits/stdc++.h>

using namespace std;

// Complete the countingValleys function below.
int countingValleys(int n, string s) {
    int cnt = 0, d = 0;
    char prev = 'U';
    if(s[0] == 'D') cnt++;
    for(int i = 0; i < n; i++){
        if((s[i] == 'D')){
            d--;
            if((prev == 'U') && (d >= 0)){
                cnt++;
                //cout << " got down at " << i + 1 << endl;
            }
            prev = 'D';
        }
        else{
            d++;
            if(d >= 0) prev = 'U';
        }
    }
    cout << cnt << " ---- dwn" << endl;
    return cnt;
}


int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string s;
    getline(cin, s);

    int result = countingValleys(n, s);

    fout << result << "\n";

    fout.close();

    return 0;
}
