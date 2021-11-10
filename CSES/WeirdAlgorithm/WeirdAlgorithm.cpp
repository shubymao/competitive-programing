#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef pair<double, double> pdd;
typedef vector<ll> vll;
typedef vector<int> vi;
typedef vector<vector<int> > vvi;
typedef vector<vector<ll> > vvll;
typedef vector<vector<pll> > vvpll;
typedef vector<pll> vpll;
typedef vector<pii> vpii;

ll MOD = 998244353;
double eps = 1e-12;
#define rep(i, begin, end)                              \
    for (__typeof(end) i = (begin) - ((begin) > (end)); \
         i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))
#define ln "\n"
#define dbg(x) cout << #x << " = " << x << ln
#define mp make_pair
#define mt make_tuple
#define eb emplace_back
#define pb push_back
#define fi first
#define se second
#define INF 2e18
#define fast_cin()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())

///////////////////////////////////////////////////////////////////////

void solve() {}

///////////////////////////////////////////////////////////////////////

int main() {
    fast_cin();
    long long val;
    cin >> val;
    cout << val;
    while(val!=1){
        if(val&1)val=val*3+1;
        else val /=2;
        cout << " " << val;
    }
    cout << "\n";
    return 0;
}