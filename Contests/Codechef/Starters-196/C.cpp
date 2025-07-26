/**
 *    author:  pun5ab
 *    created: 23.07.2025 20:44:58
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
    int n,k;
    cin >> n >> k;
    vector<int> a(n);
    int sum = 0;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
    }
    sort(a.begin(),a.end());
    
    int first = a[0], second = a[1], avg = 0;
    if(second-first <= 1) {
        avg = ( (first+second)%2 == 0 ? (first+second)/2 : (first+second+1)/2 );
        sum += (avg*k);
    }
    else {
        while(k > 0 && (second-first > 1)) {
            avg = ( (first+second)%2 == 0 ? (first+second)/2 : (first+second+1)/2 );
            sum += avg;
            k--;
            first = min(first,avg);
            second = min(second,avg);
        }
        sum += (avg*k);
    }
    cout << sum << "\n";
}   
int32_t main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int tt; cin >> tt; for(int i = 0; i < tt; i++) {solve();}
	//solve();
}