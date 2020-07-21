#include <iostream>

int get_change(int m) {
    int cnt = 0;
    while(m > 0){
        if( m >= 10){
            cnt = cnt + ( m / 10);
            m %= 10;
        }
        if( m >= 5){
            cnt = cnt + (m / 5);
            m %= 5;
        }
        if( m >= 1){
            cnt += m;
            m -= m;
        }
    }
  return cnt;
}

int main() {
  int m;
  std::cin >> m;
  std::cout << get_change(m) << '\n';
}
