//  구구단
//  2739.cpp
//  Algorithm
//
//  Created by 안상희 on 2023/04/17.
//

#include <iostream>

using namespace std;

int N;

int main() {
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    cin >> N;
    for (int i = 1; i <= 9; i++) {
        cout << N << " * " << i << " = " << N * i << '\n';
    }
    return 0;
}
