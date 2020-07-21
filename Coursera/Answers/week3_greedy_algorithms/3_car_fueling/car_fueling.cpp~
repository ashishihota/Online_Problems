#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::vector;
using std::max;

int compute_min_refills(int dist, int tank, vector<int> & v) {
    int prev = 0, curr = v[0], fstp = 0;
    int cnt = 0;
    for(int i = 1; i < v.size(); i++){
        curr = v[i];
        long long trav = curr - fstp;
        if( trav < tank){
            prev = v[i];
        }else{
            if(prev == fstp) return -1;
            fstp = prev;
            cnt++;
        }
    }
    if(v[v.size() - 1] - fstp >= tank){
        cout << "added at the last stop\n";
        cnt++;
    }
    return cnt;
}


int main() {
    int d = 0;
    cin >> d;
    int m = 0;
    cin >> m;
    int n = 0;
    cin >> n;

    vector<int> stops(n);
    for (size_t i = 0; i < n; ++i)
        cin >> stops.at(i);

    cout << compute_min_refills(d, m, stops) << "\n";

    return 0;
}
