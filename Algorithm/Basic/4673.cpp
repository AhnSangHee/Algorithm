//  셀프 넘버
//  4673.cpp
//  Algorithm
//
//  Created by 안상희 on 2023/04/18.
//

#include <iostream>

using namespace std;

int arr[10050] = { 0, };

int main() {
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    int result = 0; // 생성자의 결과물, d(n)
    
    for (int i = 1; i <= 10000; i++) {
        // d(n)에 해당하는 원소를 모두 1로 바꿔주기
        // d(n)의 값에 해당되지 않는 원소 (셀프 넘버)는 0
        if (i < 10) {
            result = i * 2;
            arr[result] = 1;
        } else if (i < 100) {
            result = i + (i / 10) + (i % 10);
            arr[result] = 1;
        } else if (i < 1000) {
            result = i + (i / 100) + (i % 100 / 10) + (i % 10);
            arr[result] = 1;
        } else {
            // 만약 10000이라면 result = 10001..
            // 배열의 크기를 넘어서 접근하지 않도록 하기 위해 배열 크기를 10001 이상으로 잡아준다
            result = i + (i / 1000) + (i % 1000 / 100) + (i % 100 / 10) + (i % 10);
            arr[result] = 1;
        }
    }
    
    for (int i = 1; i <= 10000; i++) {
        if (arr[i] == 0)
            cout << i << '\n';
    }
    return 0;
}
