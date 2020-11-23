// 小数点の標準入力・出力
#include <bits/stdc++.h>
using namespace std;

int main(){
	double a,b;
	scanf("%lf%lf",&a,&b);
	printf("%.10f\n",a+b);
}

//int64の使い方
#include <bits/stdc++.h>
using ll = int64_t;
using namespace std;

int main(){
    ll k;
	cin >> k;
	cout << k << endl;
}

//順列P
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
   vector<int> v(n);
   iota(v.begin(), v.end(), 0);
   do{
     for(int x=0;x<n;x++){
        //処理
		//v[x]で順列のi番目の値を取れる
     }
   }while(next_permutation(v.begin(),v.end()));
}

//最大値
max(a,b)