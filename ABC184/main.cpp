//20201122 A


//20201122 B
#include <bits/stdc++.h>
using ll = int64_t;
using namespace std;

int main(){
    int n, x;
	string s;
	cin >> n >> x >> s;
	int len = s.length();
	for (int i = 0; i<len; i++){
		if(s[i]=='o'){
			x++;
		}
		else{
			if (x>0){
                x--;
			} 
		}
	}
	cout << x << endl;
}