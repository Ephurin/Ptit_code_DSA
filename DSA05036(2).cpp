#include <bits/stdc++.h>
using namespace std;
void TestCase() {
    int n; cin >> n;
    int f[n], ans = 0;
    pair<float, float> a[n];
    for (int i = 0; i < n; i++) {
        f[i] = 1;
        cin >> a[i].first >> a[i].second;
        for (int j = 0; j < i; j++)
            if (a[i].first > a[j].first && a[i].second < a[j].second && f[i] <= f[j])
                f[i] = f[j] + 1;
        ans = max(ans, f[i]);
    }
    cout << ans;
}
int main() {
    int T; cin >> T;
    while (T--) {
        TestCase();
        cout << endl;
    }
    return 0;
}
