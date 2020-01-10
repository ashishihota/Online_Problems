#include<bits/stdc++.h>
            using namespace std;
            #define rep(i,b) for(i=0;i<b;++i)
            #define repp(i,a,b) for(i=a;i<b;++i)
            #define endl "\n"
            //#define LLONG_MAX 99999999999999
            typedef long long int lli;
            int main(){
                ios_base::sync_with_stdio(false);
                cin.tie(NULL);
                lli t,n,i,j,b,q,m;
                cin>>t;
                while(t--){
					cin>>n;
					vector<lli> v(n);
					rep(i,n)cin>>v[i];
					lli ind1,ind2;
					lli f=0;
					rep(i,n-1){
						if(abs(v[i]-v[i+1])>1){
							f=1;
							ind1=i+1;
							ind2=i+2;
						}
					}
					if(f==0){
						cout<<"NO"<<endl;
					}
					else{
						cout<<"YES"<<endl<<ind1<<" "<<ind2<<endl;
					}
				}



                return 0;
            }
