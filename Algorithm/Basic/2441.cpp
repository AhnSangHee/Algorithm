//  별 찍기 - 4
//  2441.cpp
//  Algorithm
//
//  Created by 안상희 on 2023/04/17.
//

#include <iostream>

using namespace std;

int N, temp;

int main(void) {
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    cin >> N;
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < temp; j++) {
            cout << " ";
        }
        for (int j = i; j < N; j++) {
            cout << "*";
        }
        cout << "\n";
        temp++;
    }

    return 0;
}
