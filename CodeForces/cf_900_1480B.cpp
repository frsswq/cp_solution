#include <bits/stdc++.h>

#ifndef ONLINE_JUDGE
#include "debugger.cpp"
#else
#define debug(...)
#define debugArr(...)
#endif

using ll = long long;

int main () {
    using namespace std;
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--) {
        ll hero_atk, hero_hp, n;        
        cin >> hero_atk >> hero_hp >> n;

        vector<pair<ll, ll>> mons_stat(n);

        for (int i = 0; i < n; i++) {
            ll x;
            cin >> x;

            mons_stat[i].first = x;
        }

        for (int i = 0; i < n; i++) {
            ll x;
            cin >> x;

            mons_stat[i].second = x;
        }

        sort(mons_stat.begin(), mons_stat.end());
        ll slain = 0;

        for (int i = 0; i < n; i++) {
            ll mons_atk = mons_stat[i].first;
            ll mons_hp = mons_stat[i].second;
            ll hero_kill_turn = ceil(mons_hp * 1.0 / hero_atk);
            ll mons_kill_turn = ceil(hero_hp * 1.0 / mons_atk);

            if (hero_kill_turn <= mons_kill_turn) {
                slain++;
            }

            hero_hp -= mons_atk * hero_kill_turn;
            
            if (hero_hp < 1) {
                break;
            }
        }

        cout << (slain == n ? "YES" : "NO") << endl;
    }

    return 0;
}