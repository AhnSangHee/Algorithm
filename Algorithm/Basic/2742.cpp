//  기찍 N
//  2742.cpp
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
    for (int i = N; i >= 1; i--) {
        cout << i << '\n';
    }
    return 0;
}
