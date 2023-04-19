//  알람 시계
//  2884.cpp
//  Algorithm
//
//  Created by 안상희 on 2023/04/18.
//

#include <iostream>

using namespace std;

int h, m;

int main() {
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    cin >> h >> m;
    
    if (h == 0) {
        if (m < 45) {
            h = h + 23;
            m = (m + 60) - 45;
            cout << h << " " << m << "\n";
        }
        else {
            m -= 45;
            cout << h << " " << m << "\n";
        }
    }
    else {
        if (m < 45) {
            h -= 1;
            m = (m + 60) - 45;
            cout << h << " " << m << "\n";
        }
        else {
            m -= 45;
            cout << h << " " << m << "\n";
        }
    }
    
    return 0;
}
