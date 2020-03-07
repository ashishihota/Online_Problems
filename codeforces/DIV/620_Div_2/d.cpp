#include <bits/stdc++.h>

using namespace std;


typedef long long ll;
typedef pair<int, int> pii;
const int MOD = 1e9 + 7;

#define rep(i,b) for(i=0;i<b;++i)
#define repp(i,a,b) for(i=a;i<b;++i)

int main() {
    ll n, k, zero  = 0, cnt = 0;
    cin >> n >> k;
    std::vector<ll> vp, vn, v;
    for(int i = 0; i < n; i++){
        ll a;
        cin >> a ;
        if(a <= 0){
            vn.push_back(a);
        }
        else vp.push_back(a);
    }
    sort(vp.begin(), vp.end()); sort(vn.begin(), vn.end());


    // for all the combinations of -ve and +ve
    bool flag = false;
    ll np = vp.size(), nn = vn.size(),nnn = 0;
    if(np != 0 && nn != 0){
        for(int i = 0; i < nn; i++){
            for(int j = 0; j < np; j++){
                ll ans = vp[j] * vn[i];
                v.push_back(ans);
                cnt++;
                if(cnt > k){
                    flag  = true;
                }
            }
            nnn++;
            if(flag){
                cout << endl << "cnt = " << cnt;
                break;
            };
        }
    }
    cout << "\n cnt after combinations = "<< cnt << endl;


    // for all the -ve nums
    if(!flag){
        cout << "reverse \n" ;
        reverse(vn.begin(), vn.end());
        for(int i = 0; i < nn; i++){
            for(int j = i + 1; j < nn; j++){
                ll ans = vn[i] * vn[j];
                v.push_back(ans);
                cnt++;
                if(cnt > k) {
                    //cout << "\nflag in -ve";
                    flag = true;
                }
            }
            if(flag) break;
        }
        //cout << "\n cnt after the -ve "<< cnt << endl;
    }

    // for all the remaining +ve nums;
    if(!flag){
        cout << "pos" << endl;
        for(int i  = 0; i < np; i++){
            for(int j = i + 1; j < np; j++){
                ll ans  = vp[i] * vp[j];
                v.push_back(ans);
                cnt++;
                if(cnt > k){
                    //cout << "\n flag in +ve";
                    flag = true;
                };
            }
            if(flag) break;
        }
        //cout << "\n cnt after the +ve = "<< cnt << endl;
    }

    sort(v.begin(), v.end());
    cout << endl << cnt << " cnt \n";
    for(auto i : v) cout << i <<" ";
    cout << endl << v[k -1];
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
