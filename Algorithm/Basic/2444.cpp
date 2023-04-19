//  별 찍기 - 7
//  2444.cpp
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
    
    int center = N; // 첫째줄에 처음으로 별이 오는 위치의 인덱스.
    
    for (int i = 0; i < N; i++) {
        for (int j = i; j < center - 1; j++) {
            cout << " ";
        }
        for (int j = 0; j < i * 2; j++) {
            cout << "*";
        }
        cout << "*";
        cout << "\n";
    }
    
    for (int i = N - 1; i > 0; i--) {
        for (int j = i; j < center; j++) {
            cout << " ";
        }
        
        for (int j = 1; j < i * 2 - 1; j++) {
            cout << "*";
        }
        cout << "*";
        cout << "\n";
    }

    return 0;
}
