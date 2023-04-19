//  나머지
//  3052.cpp
//  Algorithm
//
//  Created by 안상희 on 2023/04/18.
//

#include <iostream>

using namespace std;

int arr[42] = { 0, };
int answer = 0;

int main() {
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    for (int i = 0; i < 10; i++) {
        int num;
        cin >> num;
        
        arr[num % 42]++;
    }
    
    for (int i = 0; i < 42; i++) {
        if (arr[i] != 0) { answer++; }
    }
    
    cout << answer << '\n';
    
    return 0;
}
