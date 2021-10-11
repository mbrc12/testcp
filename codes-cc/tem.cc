#define DEBUG
#define LARGEINT
 
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
 
using namespace __gnu_pbds;
using namespace std;
 
#ifdef LARGEINT
    #define int ll
#endif
 
typedef long long ll;
 
namespace basics {
    typedef long double ld;
    typedef pair<int, int> pii;
    typedef pair<ld, ld> point;
 
    const long long mod = 1e9 + 7;
    // To remove randomization use 0 below:
    mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
 
    inline int ri(int x) { // from [0, n-1]
        return uniform_int_distribution<int>(0, x - 1)(rng);
    }
 
    inline ld rf() { // from [0, 1]
        return uniform_real_distribution<ld>(0, 1)(rng);
    }
 
    ll gcd(ll x, ll y) {
        if (x < y) return gcd(y, x);
        if (y == 0) return x;
        return gcd(y, x % y);
    }
 
    ll modexp(ll x, ll ex) {
        ll ans = 1ll;
        while (ex > 0) {
            if (ex & 1ll) ans = (ans * x) % mod;
            ex >>= 1ll;
            x = (x * x) % mod;
        }
        return ans;
    }
}
 
namespace io {
 
    istringstream _inp;
    string _inps;
 
    void common() {
        _inp.clear();
        _inps = "";
        _inp.str(_inps);
    }
 
    int gi() {
        int x;
        while (true) {
            try {
                while (_inp.peek() == ',' || _inp.peek() == ' ')
                    _inp.ignore();
                if (_inp >> x)
                    return x;
                else throw 6;
            } catch (...) {
                getline(cin, _inps);
                _inp.clear();
                _inp.str(_inps);
            }
        }
    }
}
 
#define BSET(a, p) ((a) | (1ll << (p)))
#define BCHK(a, p) (((a) & (1ll << (p)))>0)
#define BXOR(a, p) ((a) ^ (1ll << (p)));
#define BREM(a, p) (BCHK(a, p)?(BXOR(a, p)):(a))
#define BSHO(a, N) (bitset<N>(a))
 
#define fi first
#define sc second
#define pb push_back
#define X first
#define Y second
 
 
#ifdef DEBUG
#define dbg(s) {s;}
    bool debugging = true;
    #define PRELUDE {common();}
#endif
 
#ifndef DEBUG
#define dbg(s)
bool debugging = false;
#define PRELUDE { common(); ios :: sync_with_stdio(false); cin.tie(0); cout.tie(0); }
#define endl "\n"
#endif
 
#define i32 int32_t
 
#define RBTTYPE int
#define ordered_set tree<RBTTYPE, null_type, less<RBTTYPE>, rb_tree_tag,tree_order_statistics_node_update>
// Ordered set docs:
// order_of_key (k) : Number of items strictly smaller than k .
// find_by_order(k) : K-th element in a set (counting from zero).
 
#define all(v) (v).begin(),(v).end()
 
 
using namespace io;
using namespace basics;
 
const int maxn = int(1e6 + 7);
const ll inf = ll(1e16 + 7);
 
const ld eps = 1e-7;
const ld pi = acosl(-1.0);
 
void _pre() {
 
}  


void _main(int tc) {
    int n; cin >> n;
    for (int i = 1; i <= n; i++) {
        cout << i << endl;
    }
}

i32 main() {
 
    PRELUDE;
 
    auto start = chrono::high_resolution_clock::now();
    
    _pre();

    int tc = 1; 
    //cin >> tc;
 
    for (int i = 1; i <= tc; i++) {
        _main(i);
    }
    
    auto end = chrono::high_resolution_clock::now();
    auto dur = chrono::duration_cast<chrono::milliseconds>(end - start);
 
    if (debugging) {
        cout << "Time: " << dur.count() << " ms" << endl;
    }
}