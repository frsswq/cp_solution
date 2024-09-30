// Template from codemastercpp
#include <bits/stdc++.h>
// #include <sys/resource.h>
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
using namespace std;
// using namespace __gnu_pbds;

// Pragmas
// #pragma GCC optimize("03,unroll-loops")
// #pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")

// Aliases 
using ll = long long;
using ull = unsigned long long;
using ld = long double;
// template<typename T>
// using oset = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

// Constants
constexpr ll INF = 2e18;
constexpr ld EPS = 1e-9;
constexpr ll MOD = 998244853; //1e9 + 7

// Macros
#define F first
#define S second
#define all(x) begin(x), end(x)
#define allr(x) rbegin(x), rend(x)
#define int long long

int32_t main () {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    string s, t;
    cin >> s >> t;

    reverse(s.begin(), s.end());

    cout << (s == t ? "YES" : "NO") << endl;

    return 0;
}