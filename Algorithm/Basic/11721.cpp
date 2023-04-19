//  열 개씩 끊어 출력하기
//  11721.cpp
//  Algorithm
//
//  Created by 안상희 on 2023/04/17.
//

#include <iostream>
#include <string>

using namespace std;

string s;

int main() {
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    cin >> s;
    for (int i = 0; i < s.size(); i++) {
        cout << s[i];
        if (i % 10 == 9) { cout << '\n'; }
    }
    
    return 0;
}
