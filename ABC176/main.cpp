//20201124 A
#include <bits/stdc++.h>
using ll = int64_t;
using namespace std;

int main(){
    ll d, t, s;
    string c = "No";
	cin >> d >> t >> s;
    if(d <= s*t){
        c = "Yes";
	}
    
	cout << c << endl;
}

//20201124 B
#include <bits/stdc++.h>
using ll = int64_t;
using namespace std;

int main(){
    string s, t;
	cin >> s >> t;
    int ans = t.size();
	for (int i = 0; i<= s.size() - t.size(); i++){
		int d = 0;
		for (int j = 0; j<t.size(); j++){
			if(t[j] != s[i + j]){
				d++;
			}
		}
		ans = min(ans, d);
	}
    
	cout << ans << endl;
}

20201124 CHAR_BIT#include <bits/stdc++.h>
using ll = int64_t;
using namespace std;

int main(){
    ll n;
	cin >> n;
	ll a[n];
	ll sum = 0;
	int mod = 1000000007;
	for (int i = 0; i<n; i++) {
		cin >> a[i];
        sum += a[i];
		sum %= mod;
	}
    long ans = 0;
	for (int i = 0; i < n; i++)
	{
		sum -= a[i];
		if (sum < 0) sum += mod;
		ans += a[i] * sum;
		ans %= mod;
	}
	cout << ans << endl;
}

