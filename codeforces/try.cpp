#include<iostream>

using namespace std;

int main(){
    for (int i = 0; i < 10; i++){
        cout << i << " ";
         if (i == 8)
            break;
    }
    cout << endl;
    for (int i = 0; i < 10; ++i){
        cout << i << " ";
        if (i == 8){
            break;
        }
    }
    cout << endl;
    for (int i = 1; i < 10; i++){
        cout << i << " ";
         if (i == 8){
            break;
        }
    }
    cout << endl;
    for (int i = 1; i < 10; i++){
        cout << i << " ";
         if (i == 8){
            break;
        }
    }
    cout << endl;
    return 0;
}



