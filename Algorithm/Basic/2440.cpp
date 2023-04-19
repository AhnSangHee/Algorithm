//  별 찍기 - 3
//  2440.cpp
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
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N - i; j++) {
            cout << "*";
        }
        cout << '\n';
    }
    return 0;
}
