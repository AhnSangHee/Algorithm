//  A+B - 5
//  10952.cpp
//  Algorithm
//
//  Created by 안상희 on 2023/04/17.
//

#include <iostream>

using namespace std;

int A, B;

int main() {
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    while (cin >> A >> B) {
        if (A == 0 && B == 0) { break; }
        cout << A + B << '\n';
    }
    
    return 0;
}
