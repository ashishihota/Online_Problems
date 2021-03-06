/*                Read before you think                 */


#include <bits/stdc++.h>

using namespace std;


typedef long long ll;
const int MOD = 1e9 + 7;

#define rep(i,b) for(i=0;i<b;++i)
#define repp(i,a,b) for(i=a;i<b;++i)


void solve(){
	ll n, q, zero = 0, one = 0;
	cin >> n >> q;


	std::vector<ll> v(n);
	map<int,int> mp;



	for(int i = 0; i < n; i++){
		cin >> v[i];
		if(v[i] == 0) zero++;
		else one++;
	}

	bool flag = false;

	for(int i = 0; i < q; i++){
		int t, k;
		cin >> t >> k;
		if(t == 1){
			k--;
			v[k]--;
			if(v[k] == 0){
				zero++;
				one--;
			}
			else if(v[k] == -1){
				zero--;
			}
			else{
				flag = true;
				if(mp.find(k) != mp.end()){
					mp[k] = v[k];
				}				
				else {
					mp.insert({k, v[k]});
				}
			}
		}
		else{
			if(k <= one){
				cout << 1 << endl;
			}
			else if(k <= zero){
				cout << 0 << endl;
			}
			else{
				int kk = k;
				k = k - (zero + one);
				k = mp.size() - k;
				vector<pair<int,int>> vp;
				for(auto &ss : mp){
					vp.push_back({ss.second, ss.first});
				}
				sort(vp.begin(), vp.end());
				reverse(vp.begin(), vp.end());
				cout << vp[k].first << endl;
				k = kk;
				// 5 100 0 0 0 0 0 1 1  1 2 1 2  1 3 1 3 1 3 1 3 1 4 1 4 1 4 
			}
		}
	}
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t = 1;
    //cin >> t;
    while(t--){
      solve();
    }	 
    return 0;
}
/*
         ,--"""",--.__,---[],-------._
       ,"   __,'            \         \--""""""==;-
     ," _,-"  "/---.___     \       ___\   ,-'',"
    /,-'      / ;. ,.--'-.__\  _,-"" ,| `,'   /
   /``""""-._/,-|:\       []\,' ```-/:;-. `. /
             `  ;:::      ||       /:,;  `-.\
                =.,'__,---||-.____',.=
                =(:\_     ||__    ):)=
               ,"::::`----||::`--':::"._
             ,':::::::::::||::::::::::::'.
    .__     ;:::.-.:::::__||___:::::.-.:::\     __,
       """-;:::( O )::::>_|| _<::::( O )::::-"""
   =======;:::::`-`:::::::||':::::::`-`:::::\=======
    ,--"";:::_____________||______________::::""----.          , ,
         ; ::`._(    |    |||     |   )_,'::::\_,,,,,,,,,,____/,'_,
       ,;    :::`--._|____[]|_____|_.-'::::::::::::::::::::::::);_
      ;/ /      :::::::::,||,:::::::::::::::::::::::::::::::::::/
     /; ``''''----------/,'/,__,,,,,____:::::::::::::::::::::,"
     ;/                :);/|_;| ,--.. . ```-.:::::::::::::_,"
    /;                :::):__,'//""\\. ,--.. \:::,:::::_,"
   ;/              :::::/ . . . . . . //""\\. \::":__,"
   ;/          :::::::,' . . . . . . . . . . .:`::\
   ';      :::::::__,'. ,--.. . .,--. . . . . .:`::`
   ';   __,..--'''-. . //""\\. .//""\\ . ,--.. :`:::`
   ;    /  \\ .//""\\ . . . . . . . . . //""\\. :`::`
   ;   /       . . . . . . . . . . . . . . . . .:`::`
   ;   (          . . . . . . . . . . . . . . . ;:::`
   ,:  ;,            . . . . . . . . . . . . . ;':::`
   ,:  ;,             . . . . . . . . . . . . .;`:::
   ,:   ;,             . . . . . . . . . . . . ;`::;`
    ,:  ;             . . . . . . . . . . . . ;':::;`
     :   ;             . . . . . . . . . . . ,':::;
      :   '.          . . . . . . . .. . . .,':::;`
       :    `.       . . . . . . . . . . . ;::::;`
        '.    `-.   . . . . . . . . . . ,-'::::;
          `:_    ``--..___________..--'':::::;'`
             `._::,.:,.:,:_ctr_:,:,.::,.:_;'`
________________`"\/"\/\/'""""`\/"\/""\/"____________________________

*/

