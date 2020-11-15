//1
#include <bits/stdc++.h>
using namespace std;

int main(){
    int x,y;
    cin >> x;
    if(x >= 0){
        y = x;
    }
    else{
        y =0;
    }
    cout << y << endl;
}

//3
#include <bits/stdc++.h>
using ll = int64_t;
using namespace std;

int main(){
    int n;
    ll k;
    cin >> n >> k;


    ll t[10][10];
    for (int i = 0; i<n; i++){
        for (int j = 0; j<n; j++){
            cin >> t[i][j];
        }
    }
    ll dis = 0;
    int count = 0;
    

   vector<int> v(n);
   iota(v.begin(), v.end(), 0);
   do{
     for(int x=0;x<n;x++){
         int i = v[x];
         if(v[0] == 0){
             int j;
             if(x == n-1){
                j = v[0];
             }
             else{
                j = v[x+1];
             }
            dis = dis + t[i][j];
            if(x == n-1){
                if(k == dis){
                    count++;
                }
                dis = 0;
            }
         }

     }
   }while(next_permutation(v.begin(),v.end()));
   cout << count << endl;
}