#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define sync                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
#define MOD 1000000007
#define inf 2000000000

#define ff first
#define ss second

#define ll long long int
#define pii pair<ll, ll>
#define vi vector<ll>

#define hmap unordered_map
#define hset unordered_set
#define maxpq priority_queue<ll>
#define minpq priority_queue<ll, vi, greater<ll>>

template <typename T, typename U>
inline bool operator&(const T &s, U x)
{
    return (s.find(x) != s.end());
}

void solve()
{
    ll n, q;
    cin >> n >> q;
    vi v(n + 2);
    ll ans = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
        ans += (v[i] != v[i - 1]);
    }

    while (q--)
    {
        ll x, y;
        cin >> x >> y;
        if ((v[x] == v[x - 1]) && (v[x] == v[x + 1]))
        {
            if (y != v[x])
                ans += 2;
        }
        else if ((v[x] != v[x - 1]) && (v[x] == v[x + 1]))
        {
            if (y != v[x])
                ans++;
            if (y == v[x - 1])
                ans--;
        }
        else if ((v[x] == v[x - 1]) && (v[x] != v[x + 1]))
        {
            if (y != v[x])
                ans++;
            if (y == v[x + 1])
                ans--;
        }
        else
        {
            if (y == v[x - 1])
                ans--;
            if (y == v[x + 1])
                ans--;
        }
        v[x] = y;
        cout << ans << '\n';
    }
}

void precompute() {}

int main()
{
    sync;
    precompute();
    int testCases = 1, t = 1;
    cin >> testCases;
    while (testCases--)
    {
        // cout << "Case #" << t++ << ": ";
        solve();
        cout << '\n';
    }

    return 0;
}