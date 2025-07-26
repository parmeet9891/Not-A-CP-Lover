/**
 *    author:  pun5ab
 *    created: 23.07.2025 20:28:01
**/
#include<bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
	#include "Header/debug.h"
#else
	#define deb(x...)
#endif
#define int long long

void solve() {
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    map<int,vector<int>> m;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for(int i = 0; i < n; i++) {
        cin >> b[i];
    }

    for(int i = 0; i < n; i++) {
        if(a[i] < 0) continue;
        m[b[i]].push_back(a[i]);
    }

    int sum = 0, ans = 0;
    for(auto x: m) {
        vector<int> curr = x.second;
        sum += accumulate(curr.begin(),curr.end(),0);
        ans = max(ans,sum-x.first);
    }
    cout << ans << "\n";
}
int32_t main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int tt; cin >> tt; for(int i = 0; i < tt; i++) {solve();}
	//solve();
}