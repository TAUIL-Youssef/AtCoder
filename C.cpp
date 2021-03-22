
// --------------------  Beginner 50 -------------------------- //
               // -----     PB C     ----- //

#include <bits/stdc++.h>
#define MAXN 200100
#define pii pair<int,int>
#define ff first
#define ss second
#define ll long long
#define in_range(x, y, n) (x >= 0 and x<n and y >=0 and y<n)
using namespace std;
const ll mod = 1e9 + 7;
 
ll fexp(ll a, ll b){
    ll ans = 1;
 
    while (b){
        if (b&1){
            ans*=a;
            ans%=mod;
        }
        a*=a;
        a%=mod;
        b>>=1;
    }
    return ans;
}
 
int main (){
    ios_base::sync_with_stdio(false);
    ll n;
    cin >> n;
 
    vector<ll> v(n);
    map<ll, ll> freq;
 
    for (int i=0; i<n; i++){
        cin >> v[i];
        freq[v[i]]++;
    }
 
    ll con = n -1;
 
    while (con > 0){
        if (freq[con] != 2){
            cout << "0" << endl;
            return 0;
        }
        con -= 2;
    }
 
    if (n%2 == 1 and freq[0] != 1) cout << "0" << endl;
    else cout << fexp(2LL, n/2LL) << endl;
    return 0;
}
