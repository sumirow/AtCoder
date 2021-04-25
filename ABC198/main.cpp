#ifndef INCLUDED_MAIN
#define INCLUDED_MAIN

#include __FILE__


using namespace std;

//B
int main()
{

	string N;
	cin >> N;
	string Na, Nb;
	string ans = "No";
	string Nd = N;
	for(int i=0; i<Nd.size(); i++){
		if(N.size()%2==0){
			Na = N.substr(0, N.size()/2);
			Nb = N.substr(N.size()/2, N.size()-1);
		}else{
			Na = N.substr(0, N.size()/2);
			Nb = N.substr(N.size()/2+1, N.size()-1);
		}
		reverse(Nb.begin(), Nb.end());
		if(Na == Nb){
			ans = "Yes";
			break;
		}
		N = "0" + N;
	}
	cout << ans << endl;



}

//C
int main()
{
	double R, X, Y;
	cin >> R >> X >> Y;
    double D = sqrt(X * X + Y * Y);
    int ans = ceil(D / R);
    if (ans == 1 && D != R) ans++;
	cout << ans;
}




#else

// ↓template↓
#include <bits/stdc++.h>

long long ll;

//配列の最大値
#define SIZE_OF_ARRAY(array) (sizeof(array)/sizeof(array[0]))
int maxElement(const int* array, size_t size)
{
    assert(array != NULL);
    assert(size >= 1);

    int max = array[0];
    for (size_t i = 1; i < size; ++i) {
        if (max < array[i]) {
            max = array[i];
        }
    }

    return max;
}

//配列の最小値
int minElement(const int* array, size_t size)
{
    assert(array != NULL);
    assert(size >= 1);

    int min = array[0];
    for (size_t i = 1; i < size; ++i) {
        if (min > array[i]) {
            min = array[i];
        }
    }

    return min;
}

//２点間の距離
double calcDist(double x1, double y1, double x2, double y2){
    return sqrt((x1 - x2)*(x1 - x2) + (y1 - y2) * (y1 - y2));
}

// ↑template↑

#endif
