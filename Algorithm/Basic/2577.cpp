//
//  2577.cpp
//  Algorithm
//
//  Created by 안상희 on 2023/04/18.
//

#include <iostream>

using namespace std;

int A, B, C;
int num[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };

int main() {
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    cin >> A >> B >> C;
    int result = A * B * C;
    
    while (result != 0) {
        num[result % 10]++;
        result /= 10;
    }
    for (auto n: num) {
        cout << n << '\n';
    }
    return 0;
}
