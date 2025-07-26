/**
 *    author:  pun5ab
 *    created: 23.07.2025 19:59:58
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
    int n,c;
    cin >> n >> c;
    vector<int> a(200,0);
    int mn = INT_MAX;
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        a[x] = 1;
        mn = min(mn,x);
    }

    if(a[c] == 1) {
        for(int i = c+1; i < 200; i++) {
            if(a[i] == 0) {
                cout << i - c << "\n";
                return;
            }
        }
    }
    else {
        if(mn < c) {
            cout << 0 << "\n";
            return;
        }
        else {
            for(int i = mn; i < 200; i++) {
                if(a[i] == 0) {
                    cout << i - c << "\n";
                    return;
                }
            }
        }
    }


}
int32_t main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int tt; cin >> tt; for(int i = 0; i < tt; i++) {solve();}
	//solve();
}