//20201202 B
#include <bits/stdc++.h>
using ll = int64_t;
using namespace std;

int main(){
    int n, d;
	cin >> n >> d;
	int ans = 0;
	vector<double> x(n);
	vector<double> y(n);
    for(int i = 0; i<n; i++){
        cin >> x[i] >> y[i];
	}
    for(int i = 0; i<n; i++){
        double dis = sqrt(x[i]*x[i] + y[i]*y[i]);
		if(dis <= d){
			ans++;
		}
	}
	cout << ans << endl;
}



