#include <bits/stdc++.h>
using namespace std;
 
const int MAX_N = 1e5 + 5;
 
int T, N, M, Z[MAX_N];
long long D[MAX_N];
vector<pair<int, int> > c[MAX_N];
 
int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
 
    cin >> T;
    while (T--) {
        cin >> N >> M;
        for (int i = 1; i <= N; i++)
            cin >> Z[i];
        for (int i = 0; i < M; i++) {
            int L, R, K; cin >> L >> R >> K;
            c[L].emplace_back(R, K);
        }
 
        set<pair<int, int> > s;
        long long dmg = 0, ans = 0;
        for (int i = 1; i <= N; i++) {
            dmg -= D[i];
            for (auto p : c[i])
                s.insert(p);
            Z[i] -= dmg;
            while (Z[i] > 0) {
                if (s.empty() || s.rbegin()->first < i) { ans = -1; break; }
                int R, K; tie(R, K) = *s.rbegin(); s.erase(prev(s.end()));
                int d = min(Z[i], K);
                Z[i] -= d; K -= d;
                ans += d; dmg += d; D[R + 1] += d;
                if (K) s.emplace(R, K);
            }
            if (ans == -1) break;
        }
 
        if (ans == -1) cout << "NO\n";
        else cout << "YES " << ans << "\n";
 
        fill_n(D + 1, N, 0);
        fill_n(c + 1, N, vector<pair<int, int> >(0));
    }
} 