//20201201 B
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> vec(N);
    for (int i = 0; i < N; ++i) cin >> vec[i];
    sort(vec.begin(), vec.end());

    int ans = 0;

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < i; ++j) {
            for (int k = 0; k < j; ++k) {
                if (vec[k] != vec[j] and vec[i] != vec[j] and
                    vec[k] + vec[j] > vec[i]) {
                    ans++;
                }
            }
        }
    }

    cout << ans << endl;

    return 0;
}

#include <bits/stdc++.h>
using ll = int64_t;
using namespace std;

int main(){
    int n;
	cin >> n;
	int ans = 0;
	vector<int> a(n);
    for(int i = 0; i<n; i++){
        cin >> a[i];
	}
	sort(a.begin(), a.end());
	for (int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			for(int k = 0; k < n; k++){
                if (a[k] != a[j] and a[i] != a[j] and
                    a[k] + a[j] > a[i]) {
                    ans++;
                }
			}
		}
	}
	cout << ans << endl;
}



