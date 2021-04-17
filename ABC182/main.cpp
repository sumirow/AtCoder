//C 20201119 途中
#include <bits/stdc++.h>
using ll = int64_t;
using namespace std;

int main(){
	int ans = -1;
	string n;
	int count = 0;
	cin >> n;
    int size = n.size();
	bool t = true;
	int N[size];
	ll sum=1;
	for (int i = 0; i<size; i++){
		ll num = n[i]-'0';
		N[i] = num;
	}
	while(sum % 3 != 0){
		int c = 0;
		sum = 0;
    	for (int i =0; i<size; i++){
            sum += N[i];
     	}
		if(sum % 3 == 1){
			for (int i =0; i<size; i++){
				if(t == true){
                    if(N[i]==1 || N[i] == 4 || N[i] == 7){
					    N[i]=0;
					    t = false;
				    }
				}
     	    }
		}
		if(sum % 3 == 2){
			for (int i =0; i<size; i++){
				if (t == true){
                    if(N[i]==2 || N[i] == 5 || N[i] == 8){
				    	N[i]=0;
				    	t = false;
				    }
				}

     	    }
		}
		t = true;
		ans++;
		count++;
		if(count > size){
			ans = -1;
			break;
		}
	}
    cout << ans << endl;
}