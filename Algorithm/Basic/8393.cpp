//  합
//  8393.cpp
//  Algorithm
//
//  Created by 안상희 on 2023/04/17.
//

#include <iostream>

using namespace std;

int n, sum;

int main() {
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    cin >> n;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    cout << sum << '\n';
    return 0;
}
