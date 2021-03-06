#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define sync ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define MOD 1000000007
#define inf 2000000000

#define ff first
#define ss second

#define ll  long long int
#define pii pair<ll, ll>
#define vi  vector<ll>

#define hmap  unordered_map
#define hset  unordered_set
#define maxpq priority_queue<ll>
#define minpq priority_queue<ll,vi,greater<ll>>

template<typename T, typename U>
inline bool operator&(const T &s, U x) {return (s.find(x) != s.end());}

void solve() {
    string a, b;
    cin >> a >> b;
    if (a == b) {
        cout << 0;
        return;
    }
    ll ans = 0;
    ll n = a.size();
    for (int i = 0; i < n; i += 2) {
        if (a[i] != b[i]) {
            int j = i;
            while (j < n and a[j] != b[j]) {
                j += 2;
            }
            i = j - 2;
            ans++;
        }
    }

    for (int i = 1; i < n; i += 2) {
        if (a[i] != b[i]) {
            int j = i;
            while (j < n and a[j] != b[j]) {
                j += 2;
            }
            i = j - 2;
            ans++;
        }
    }



    cout << ans;
}

void precompute() {}

int main() {
    sync;
    precompute();
    int testCases = 1, t = 1;
    cin >> testCases;
    while (testCases--) {
        // cout << "Case #" << t++ << ": ";
        solve();
        cout << '\n';
    }

    return 0;
}
