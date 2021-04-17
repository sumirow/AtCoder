//20201121 A
#include <bits/stdc++.h>
using ll = int64_t;
using namespace std;

int main(){
	string S;
	cin >> S;
	int len=S.length();
	
	if(S[len-1]=='s'){
		S += "es";
	}else{
		S += "s";
	}
	cout << S;
}

//20201121 B
#include <bits/stdc++.h>
using ll = int64_t;
using namespace std;

int main(){
	int n;
	int d[101][3];
	string c = "No";
	int z = 0;
	cin >> n;
	for (int i=0; i<n; i++){
        for(int j= 0; j<2; j++){
			cin >> d[i][j];
		}
	}
	for (int i=0; i<n; i++){
        if(d[i][0]==d[i][1]){
			z++;
			if(z>2){
	         	c ="Yes";
         	}
		}
		else{
			z =0;
		}
	}

	cout << c << endl;

}

//20201122 C
#include <bits/stdc++.h>
using ll = int64_t;
using namespace std;

int main(){
	ll n;
	ll ans = 0;
	cin >> n;
    for(ll i=1; i<=n; i++){
        ans += (n-1)/i;
	}
	cout << ans << endl;
}
