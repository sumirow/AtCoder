#ifndef INCLUDED_MAIN
#define INCLUDED_MAIN

#include __FILE__


using namespace std;

//B
int main()
{
	string n;
	cin >> n;
    
    for(int i=0; i<n.size(); i++){
        if(n.at(i)=='.'){
            break;
        }else{
            cout << n.at(i);
        }
    }

}

//C
int main()
{
    long long  N;
    cin >> N;
    for(long long  i = 1; i<1000000000000; i++){
        if(stoll(to_string(i) + to_string(i)) > N){
            cout << i - 1 << endl;
            break;
        }
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
