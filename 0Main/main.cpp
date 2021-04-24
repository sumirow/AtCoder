#ifndef INCLUDED_MAIN
#define INCLUDED_MAIN

#include __FILE__

using namespace std;

int main()
{
    int H, W;
    cin >> H >> W;
    vector<vector<int>> a(H, vector<int>(W));
    int inpt = 0;
    int mini = 101;
    for(int i=0; i<H; i++){
        for(int j=0; j<W; j++){
            cin >> inpt;
            a.at(i).at(j) = inpt;
            if(mini > inpt){
                mini = inpt;
            }
        }
    }
    int ans = 0;
    for(int i=0; i<H; i++){
        for(int j=0; j<W; j++){
            ans = ans + (a.at(i).at(j) - mini);
        }
    }
    cout << ans << endl;





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
