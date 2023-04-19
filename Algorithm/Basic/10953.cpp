//  A+B - 6
//  10953.cpp
//  Algorithm
//
//  Created by 안상희 on 2023/04/17.
//

#include <iostream>

using namespace std;

int T;

int main() {
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    cin >> T;
    while (T--) {
        int A, B;
        char c;
        cin >> A >> c >> B;
        cout << A + B << '\n';
    }
    
    return 0;
}
