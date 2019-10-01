#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef std::vector<long long> vl;


void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

int main() {
    int noofmsg, display, frnd;
    cin >> noofmsg >> display;
    deque<int> q(display,0);
    set<int> sett;
    for(int i = 0; i < noofmsg; i++){
        cin >> frnd;
        deque<int>::iterator it = find(q.begin(), q.end(), frnd);
        if( it!= q.end()){
            continue;
            cout<<"found";
        }
        else {
            sett.insert(frnd);
            q.pop_back();
            q.push_front(frnd);
        }
    }

    int total = sett.size();
    if(total >= display){
        cout << display << endl;
        for(int i = 0; i < display; i++){
            cout <<q[i] << " ";
        }
    }
    else{
        cout << total << endl;
        for(int i = 0; i < total; i++){
            cout <<q[i] << " ";
        }
    }

    return 0;
}
