#ifndef INCLUDED_MAIN
#define INCLUDED_MAIN

#include __FILE__ 

using namespace std;

int main()
{
    string S;
	int N, Q;
	cin >> N >> S >> Q;
	int t;
	int a;
	int b;
	vector<char> s(2*N);
	vector<char> sd(2*N);
	for (int i=0; i<2*N; i++){
		s.at(i) = S.at(i);
		sd.at(i) = S.at(i);
	}

	string Sa, Sb;
	int sa, sb;
	for(int i=0; i<Q; i++){
		cin >> t >> a >> b;
			if(t == 1){
			sa = a-1;
			sb = b-1;
			s.at(sa) = sd.at(sb);
     		s.at(sb) = sd.at(sa);

		}else if(t == 2){
			for(int i = 0; i<N; i++){
				s.at(i) = sd.at(i+N-1);
				s.at(i+N-1)=sd.at(i);
			}

		}
	}
	for(int i=0; i<2*N; i++){
		cout << s.at(i);
	}

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