//  OX퀴즈
//  8958.cpp
//  Algorithm
//
//  Created by 안상희 on 2023/04/18.
//

#include <iostream>
#include <string>

using namespace std;

int T;
string s;

int main() {
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    cin >> T;
    
    while (T--) {
        cin >> s;
        
        int num = 0;
        int total = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == 'O') {
                num++; // 연속된 O의 개수 세기
                total += num;
            } else {
                num = 0;
            }
        }
        cout << total << '\n';
    }
    
    return 0;
}
