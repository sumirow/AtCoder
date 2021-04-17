#ifndef INCLUDED_MAIN
#define INCLUDED_MAIN

#include __FILE__ 

int main()
{
    string s, t;
	cin >> s >> t;
    int ans = 0;
	for (int i = 0; i < s.size(); i++){
		if(s[i] != t[i]){
			ans++;
		}
	}
    cout << ans << endl;
}

#else  

// ↓template↓

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define all(x) begin(x), end(x)
template <class T>
bool chmax(T &a, const T &b) {
    if (a < b) a = b; return a < b;
}
template <class T>
bool chmin(T &a, const T &b) {
    if (b < a) a = b; return b < a;
}

// ↑template↑

#endif 