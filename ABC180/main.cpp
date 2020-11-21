//20201121 A
#include <bits/stdc++.h>
using ll = int64_t;
using namespace std;

int main(){
    int n, a, b;
	cin >> n >> a >>b;
	cout << n - a + b <<endl;
}

//20201121 B
#include <bits/stdc++.h>
using ll = int64_t;
using namespace std;

int main(){
    int n;
	cin >> n;
	ll x[n];
    for (int i = 0; i<n; i++) cin >> x[i];
	ll m=0,c=0;
    double u = 0.00000000;
	for (int i = 0; i < n; i++){
        if(x[i]<0){
			m = m+x[i]*-1;
			if(c<x[i]*-1){
				c = x[i]*-1;
			}
		}
		else{
            m = m + x[i];
			if(c<x[i]){
				c = x[i];
			}
		} 
		u = u + x[i]*x[i];
	}
	u = sqrt(u);
	cout << m << endl;
	printf("%.15f\n",u);
	cout << c << endl;
}