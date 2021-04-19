/*                Read before you think                 */


#include <bits/stdc++.h>

using namespace std;


typedef long long ll;
typedef pair<int, int> pii;
const int MOD = 1e9 + 7;

#define rep(i,b) for(i=0;i<b;++i)
#define repp(i,a,b) for(i=a;i<b;++i)


void solve(){
  ll a = 0, b = 0, c = 0;
  string s;
  cin >> s;
  for(auto i : s){
    if (i == 'A') a++;
    else if (i == 'B') b++;
    else c++;
  }
  if(s[0] == s[s.size() - 1]) {
    cout << "NO" << endl;
    return;
  }
  
  ll mx = max(a, max(b,c));
  ll sum = a + b + c;
  if((sum - mx) != mx){
   // cout << sum << "  " << a << " " << b << " " << c << endl;
    cout << "NO" << endl;
    return;
  }

  if(mx == a){
    if((s[0] !='A' && s[s.size() - 1] != 'A')){
      cout << "NO" << endl;
      return;
    }
    else{
      ll tot = 0;
      if(s[0] == 'A'){
        for(auto i : s){
          if(i == 'A') tot++;
          else{
            tot--;
            if(tot < 0){
              cout << "NO" << endl;
              return;
            }
          }        
        }
      }
      else{
        for(auto i : s){
          if(i == 'A'){
            tot--;
            if(tot < 0){
              cout << "NO" << endl;
              return;
            }
          }
          else{
            tot++;
          }
        }
      }
    }
  }

  else if(mx == b){
    if((s[0] !='B' && s[s.size() - 1] != 'B')){
      cout << "NO" << endl;
      return;
    }
    else{
      ll tot = 0;
      if(s[0] == 'B'){
        for(auto i : s){
          if(i == 'B') tot++;
          else{
            tot--;
            if(tot < 0){
              cout << "NO" << endl;
              return;
            }
          }        
        }
      }
      else{
        for(auto i : s){
          if(i == 'B'){
            tot--;
            if(tot < 0){
              cout << "NO" << endl;
              return;
            }
          }
          else tot++;
        }
      }
    }
  }

  else{
      if((s[0] !='C' && s[s.size() - 1] != 'C')){
      cout << "NO" << endl;
      return;
    }
    else{
      ll tot = 0;
      if(s[0] == 'C'){
        for(auto i : s){
          if(i == 'C') tot++;
          else{
            tot--;
            if(tot < 0){
              cout << "NO" << endl;
              return;
            }
          }        
        }
      }
      else{
        for(auto i : s){
          if(i == 'C'){
            tot--;
            if(tot < 0){
              cout << "NO" << endl;
              return;
            }
          }
        }
      }
    }
  }

  cout << "YES" << endl;
  return;
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

