//  숫자의 합
//  11720.cpp
//  Algorithm
//
//  Created by 안상희 on 2023/04/17.
//

#include <iostream>
#include <string>

using namespace std;

int N, sum;
char numbers[100];

int main() {
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> numbers[i];
        sum += numbers[i] - '0';
    }
    cout << sum << '\n';
    return 0;
}
