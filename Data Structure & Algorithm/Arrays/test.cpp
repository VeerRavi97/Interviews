#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll>vi;
typedef pair<ll,ll>ii;
typedef vector<ii>vii;
 
#define all(c) (c).begin(),(c).end()
#define fast ios::sync_with_stdio(0);cin.tie(0);
 
const ll MOD=1e9+7;
const ll INF=0x3f3f3f3f;
const double EPS=1e-9;
const ll MAX_N=1e5+5;
char * conversion(string s){
 char *ans=&s[0];

  cout << strlen(ans) << " " <<  s.length() << "\n";
 return ans;
}
 
int main(){
int tc;
cin >> tc;
while(tc--){
	string s;
	cin >> s;
	cout << conversion(s) << "\n";
}
 
return 0;
}