#include <bits/stdc++.h>

using namespace std;


typedef long long ll;
typedef pair<int, int> pii;
const int MOD = 1e9 + 7;

#define rep(i,b) for(i=0;i<b;++i)
#define repp(i,a,b) for(i=a;i<b;++i)


void solve(){
  ll r, c, cnt = 0;
  cin >> r >> c;
  vector<vector<char>> cell(r,vector<char>(c));
  vector<vector<ll>> v(r,vector<ll>(c));
  for(int i = 0; i < r; i++){
    for(int j = 0; j < c; j++){
      cin >> cell[i][j];
      if(cell[i][j] == '*'){
        v[i][j] = 1;
      }
    }
  }
  
  ll ans = 0;
  for(int i = 1; i < r; i++){
    for(int j = 1; j < c; j++){
      if(v[i][j]){
        ll cnt = 0;
        bool flag = true;
        ll mn = v[i-1][j];
        //cout << mn << endl;
        int left = 0, right = 0;
        for(int k = mn; k > 0; k--){
          if(cell[i][k] == '*'){
            left++;
          }
          else break;
        }
        for(int k = mn; k < c; k++){
          if(cell[i][k] == '*'){
            right++;
          }
          else break;
        }
        left = min(left, right);
        v[i][j] = max(v[i-1][j]+1, ll(left));
      }
    }
  }

  for(int i = 0; i < r; i++){
    for(int j = 0; j < c; j++){
      if(v[i][j]){
        ll cnt = 0;
        for(int k = 0; k < v[i][j]; k++){
          if(cell[i][j+k] != '*' || cell[i][j+k] != '*'){
            v[i][j] = cnt;
          }
          else cnt++;
        }
      }
    }
  }

  for(int i = 0; i < r; i++){
    for(int j = 0; j < c; j++){
      ans += v[i][j];
      cout << v[i][j] << " ";
    }
    cout << endl;
  }
  cout << ans << endl;
  cout << endl;

}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t = 1;
    cin >> t;
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
