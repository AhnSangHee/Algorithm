//  그대로 출력하기
//  11718.cpp
//  Algorithm
//
//  Created by 안상희 on 2023/04/17.
//

#include <iostream>

using namespace std;

string s;

int main() {
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    while (getline(cin, s)) {
        cout << s << '\n';
    }
    
    return 0;
}
