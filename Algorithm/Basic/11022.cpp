//  A+B - 8
//  11022.cpp
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
    for (int i = 1; i <= T; i++) {
        int A, B;
        cin >> A >> B;
        cout << "Case #" << i << ": " << A << " + " << B << " = " << A + B << '\n';
    }
    
    return 0;
}
