#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define sync ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define MOD 1000000007

#define ff first
#define ss second

#define ll  long long int
#define pii pair<ll, ll>
#define vi  vector<ll>

int main() { 
    sync;
    int testCases;
    cin >> testCases;
    while (testCases--) {
        ll a,b,c,d;
        cin>>a>>b>>c>>d;
        if(b>=a){
            cout<<b<<'\n';
            continue;
        } else if(c<=d) {
            cout << "-1\n";
            continue;
        }
        ll n = ceil((a-b)/(double)(c-d));
        ll ans = b+c*n;
        cout<<ans<<'\n';
    }

    return 0;
}
