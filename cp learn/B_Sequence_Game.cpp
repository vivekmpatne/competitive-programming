#include <bits/stdc++.h>
 
using i64 = long long;
 
void solve() {
    int n;
    std::cin >> n;
    
    std::vector<int> b(n);
    for (int i = 0; i < n; i++) {
        std::cin >> b[i];
    }
    
    std::vector<int> a;
    a.reserve(2 * n);
    for (int i = 0; i < n; i++) {
        if (i == 0 || b[i] >= b[i - 1]) {
            a.push_back(b[i]);
        } else {
            a.push_back(b[i]);
            a.push_back(b[i]);
        }
    }
    
    const int m = a.size();
    std::cout << m << "\n";
    for (int i = 0; i < m; i++) {
        std::cout << a[i] << " \n"[i == m - 1];
    }
}
 
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    int t;
    std::cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}