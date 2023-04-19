//  별 찍기 - 17
//  10992.cpp
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
        for (int j = i; j < N; j++) {
            cout << " ";
        }

        // 1번째, 마지막째줄은 그대로 출력
        if (i == 1 || i == N) {
            for (int j = 1; j <= (i - 1) * 2 + 1; j++) {
                cout << "*";
            }
        } else { // 그 외는 제일 앞과 마지막은 *로, 그 사이는 공백으로 채워주기
            cout << "*";
            for (int j = 1; j <= (i - 1) * 2 - 1; j++) {
                cout << " ";
            }
            cout << "*";
        }
        cout << "\n";
    }
    
    return 0;
}
