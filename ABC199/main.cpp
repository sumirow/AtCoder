

#ifndef INCLUDED_MAIN
#define INCLUDED_MAIN

#include __FILE__ 

using namespace std;


//A

#ifndef INCLUDED_MAIN
#define INCLUDED_MAIN

#include __FILE__ 

using namespace std;

int main()
{
    int a, b, c;
	cin >> a >> b >> c;
	string ans = "No";
	if(a*a+b*b < c*c){
		ans = "Yes";
	}
	cout << ans;
}

//B
int main()
{
    int N;
	cin >> N;
	vector<int> a(N);
	vector<int> b(N);
	for(int i=0; i<N; i++){
		cin >> a.at(i);
	}
	for(int i=0; i<N; i++){
		cin >>  b.at(i);
	}
	vector<int> c(1001, 0);

	for(int i=0; i<N; i++){
		for(int j=a.at(i); j<=b.at(i); j++){
			c.at(j)=c.at(j)+1;
		}
		
	}
	sort(c.begin(), c.end(), greater<int>());
	int max = c.at(0);

	int ans = 0;
	for(int i=0; i<1001; i++){
		if(c.at(i)==max){
			ans++;
		}
		if(c.at(i) != max){
			break;
		}
	}
	if(max<N){
		ans = 0;
	}
	cout << ans;
}

#else  

// ↓template↓
#include <iostream>
#include <assert.h>
#include <stdio.h>
#include<cmath>
#include<vector>

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


#else  

// ↓template↓
#include <iostream>
#include <assert.h>
#include <stdio.h>

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


// ↑template↑

#endif 

// B
#ifndef INCLUDED_MAIN
#define INCLUDED_MAIN

#include __FILE__ 

using namespace std;

int main()
{
    int n, m, t;
	//const int a[];
	//const int b[];

	cin >> n >> m >> t;
	int c = 0;
	int d = n;
	int f = 1;
	for (int i = 0; i < m; ++i){
		int a;
		int b;
		cin >> a >> b;
		int l = a - c;
		n = n -l;
		if (n <= 0){
			f = 0;
		}
		n = n + b - a;
		c = b;
		//cout << i+1 << "回目 " << l << " " << b -a << " " <<  n << endl;
		if(n>d){
			n=d;
		}

		
		
	}
	n = n - (t - c);
	//cout << "最終残量 " << n << endl;
	if(f == 0){
		n = 0;
	}
    if(n > 0){
	    cout << "Yes" << endl;
	}else{
		cout << "No" << endl;
	}

    
}

#else  

// ↓template↓
#include <iostream>
#include <assert.h>
#include <stdio.h>
#include<cmath>
#include<vector>

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