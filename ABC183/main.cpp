#include <bits/stdc++.h>
#include <algorithm>
#include <cctype>
#include <iostream>
#include <string>
using namespace std;

int main(){
    string n;
    cin >> n;
    std::string s(n);

    std::transform(s.begin(), s.end(), s.begin(), std::toupper);
    std::cout << s << std::endl;
    
}
