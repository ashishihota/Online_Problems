#include<bits/stdc++.h>
        using namespace std;
        #define rep(i,b) for(i=0;i<b;++i)
        #define repp(i,a,b) for(i=a;i<b;++i)
        #define endl "\n"
        #define LLONG_MAX 99999999999999
        typedef long long int lli;
        int main(){
                string s;
                lli i,f=1;
                cin>>s;
                repp(i,1,s.length()){
                    if(s[i]==s[i-1]){
                        f++;
                        if(f>6){
                            cout<<"YES"<<endl;
                            return 0;
                        }
                    }
                    else{
                        f=1;
                    }
                }
                cout<<"NO"<<endl;
                return 0;
            }




