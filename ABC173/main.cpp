//20201202 B
#include <bits/stdc++.h>
using ll = int64_t;
using namespace std;

int main(){
    int n;
	cin >> n;
	int ans = 0;
    int ac = 0;
	int wa = 0;
	int tle = 0;
	int re = 0;
	vector<string> s(n);
    for(int i = 0; i<n; i++){
        cin >> s[i];
	}
    for(int i = 0; i<n; i++){
        if(s[i]=="AC"){
			ac++;
		}
		else if(s[i] == "WA"){
			wa++;
		}
		else if(s[i]== "TLE"){
			tle++;
		}
		else if(s[i] == "RE"){
			re++;
		}

	}
	cout << "AC x " << ac<<endl;
	cout << "WA x " << wa << endl;
	cout << "TLE x " << tle << endl;
	cout << "RE x " << re << endl;
}


