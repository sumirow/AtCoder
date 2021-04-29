#ifndef INCLUDED_MAIN
#define INCLUDED_MAIN

#include __FILE__


using namespace std;

//B
int main()
{
	int h, w, x, y;
	cin >> h >> w >> x >> y;
    string moji;
    vector<vector<char>> s(h, vector<char>(w));
    for(int i=0; i<h; i++){
        cin >> moji;
        for(int j=0; j<w; j++){
            s.at(i).at(j) = moji.at(j);
        }
        
    }
    int ans = -3;
    
    for(int i=y-1; i>=0; i--){
        //cout << y-1 << " " << i << endl;
        if(s.at(x-1).at(i) == '#'){
            break;
        }
        ans++;
    }
    
    for(int i=y-1; i<w; i++){
        //cout << y-1 << " " << i << endl;
        if(s.at(x-1).at(i) == '#'){
            break;
        }
        ans++;
    }
    
    for(int i=x-1; i>=0; i--){
        //cout << i << " " << x-1 << endl;
        if(s.at(i).at(y-1) == '#'){
            break;
        }
        ans++;
    }
    
    for(int i=x-1; i<h; i++){
        //cout << i << " " << x-1 << endl;
        if(s.at(i).at(y-1) == '#'){
            break;
        }
        ans++;
    }
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
