#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        bool all_equal = true;
        for (int i = 1; i < n; i++) {
            if (a[i] != a[0]) {
                all_equal = false;
                break;
            }
        }

        if (all_equal) {
            cout << -1 << "\n";
            continue;
        }

        int mx = *max_element(a.begin(), a.end());
        vector<int> b, c;
        for (int i = 0; i < n; i++) {
            if (a[i] == mx) c.push_back(a[i]);
            else b.push_back(a[i]);
        }

        cout << b.size() << " " << c.size() << "\n";
        for (int x : b) cout << x << " ";
        cout << "\n";
        for (int x : c) cout << x << " ";
        cout << "\n";
    }
    return 0;
}
