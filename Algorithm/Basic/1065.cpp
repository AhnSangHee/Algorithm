//  한수
//  1065.cpp
//  Algorithm
//
//  Created by 안상희 on 2023/04/18.
//

#include <iostream>

using namespace std;

int N, answer;

int main() {
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    cin >> N;
    

    if (N < 100) { cout << N << '\n'; } // 1부터 99까지의 숫자는 모두 한수이므로, 입력받은 숫자 자체가 한수의 갯수
    else {
        for (int i = 100; i <= N; i++) {
            int a = i / 100;
            int b = (i % 100) / 10;
            int c = i % 10;
            
            if (a - b == b - c) answer++;
        }
        cout << answer + 99 << '\n';
    }
    return 0;
}
