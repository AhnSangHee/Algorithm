//  별 찍기 - 12
//  2522.cpp
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
    
    for (int i = 1; i <= N; i++) {
        for (int j = 0; j < N - i; j++) {
            cout << " ";
        }
        
        for (int j = 0; j < i; j++) {
            cout << "*";
        }
        
        cout << '\n';
    }
    
    for (int i = N - 1; i > 0; i--) {
        for (int j = 0; j < N - i; j++) {
            cout << " ";
        }
        
        for (int j = 0; j < i; j++) {
            cout << "*";
        }
        
        cout << '\n';
    }
    
    return 0;
}
