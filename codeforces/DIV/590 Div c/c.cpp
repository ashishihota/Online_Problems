#include<bits/stdc++.h>
using namespace std;
#define rep(i,b) for(i=0;i<b;++i)
#define rev(i,b) for(i=b;i>0;i--)
#define repp(i,a,b) for(i=a;i<b;++i)
#define endl "\n"
typedef long long int lli;

int main(){
    lli n, i , num, row = 2;
    std::vector<lli> r1;
    std::vector<lli> r2;
    string s1, s2,now;
    cin >> n;
    while(n > 0){
        cin >> num;
        cin >> s1 >> s2;
        now = s2;
        /*
        s1 =    L L L
        s2 =    L L l

        */
        while(num = 0){
            if(row == 2){    // if i am in the second row
                if(now[i] == '3' || now[i] == '4'|| now[i] == '5'|| now[i] == '6'){
                    if(s1[i] == '1'|| s1[i] == '2'){
                        break;
                    }
                    else{
                        if((i > 0) && ()){

                        }
                        else{
                        row = 1;
                        now = s1;
                        cout << " changing row in "<< i <<" --COLOMN  \n";
                        }
                }
            }

                else continue;

            }

            else{       //  if i am in the first row
                if(now[i] == '3' || now[i] == '4'|| now[i] == '5'|| now[i] == '6'){
                    if(s2[i] == '1'|| s2[i] == '2'){
                        break;
                    }
                    else{
                        num++;
                        row = 2;
                        now = s2;
                        cout << " changing row in "<< i <<" --COLOMN  \n";
                    }
                }
                else continue;
            }
        num --;
        }
        if (row == 1) cout<< "YES";
        else cout << "NO";
        n--;
    }
    return 0;
}
