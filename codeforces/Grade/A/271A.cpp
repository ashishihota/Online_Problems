#include<bits/stdc++.h>

using namespace std;

bool check(int num)
{
    bool visited[10] = {false};

    while (num) {
        if (visited[num % 10])
            break;

        visited[num%10] = true;

        num = num/10;
    }

    if (num == 0)
        return true;
return false;
}

int main(){
    int i, ny;
    cin >> i;
    while(true){
        i++;
        if(check(i)) {
            cout << i;
            return 0;
    }
    }
    return 0;
}
