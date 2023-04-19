//  N 찍기
//  2741.cpp
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
    for (int i = 1; i <= N; i++) {
        cout << i << '\n';
    }
    return 0;
}
