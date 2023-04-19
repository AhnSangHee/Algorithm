//  별 찍기 - 8
//  2445.cpp
//  Algorithm
//
//  Created by 안상희 on 2023/04/17.
//

#include <iostream>

using namespace std;

int N;

int main(void) {
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    cin >> N;
    
    // 첫째줄의 별 : 1 * 2 = 2, 공백은 N * 2 - 1 * 2 = 10 - 2 = 8
    // 둘째줄의 별 : 2 * 2 = 4, 공백은 N * 2 - 2 * 2 = 10 - 4 = 6
    // 셋째줄의 별 : 3 * 2 = 6
    for (int i = 1; i <= N; i++) {
        for (int j = 0; j < i; j++) {
            cout << "*";
        }
        
        for (int j = 0; j < N * 2 - i * 2; j++) {
            cout << " ";
        }
        
        for (int j = 0; j < i; j++) {
            cout << "*";
        }
        cout << '\n';
    }
    
    // 6번째줄의 별: 4 * 2 = 8, 공백은 N - (i * 2)
    for (int i = N - 1; i > 0; i--) {
        for (int j = 0; j < i; j++) {
            cout << "*";
        }
        
        for (int j = 0; j < N * 2 - i * 2; j++) {
            cout << " ";
        }
            
        for (int j = 0; j < i; j++) {
            cout << "*";
        }
        cout << '\n';
    }

    return 0;
}
