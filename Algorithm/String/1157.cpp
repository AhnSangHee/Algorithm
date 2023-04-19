//  단어 공부
//  1157.cpp
//  Algorithm
//
//  Created by 안상희 on 2023/04/19.
//

#include <iostream>
#include <string>

using namespace std;

int alphabet[26] = { 0, };
string s;

int main() {
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    cin >> s;
    
    for (int i = 0; i < s.size(); i++) {
        int asciiCode = int(s[i]);
        
        if (asciiCode >= 97 && asciiCode <= 132) { // 소문자를 대문자로 바꿔주기
            asciiCode -= 32;
        }
        
        alphabet[asciiCode - 65]++; // 사용된 알파벳의 개수 체크
    }
    
    bool isDuplicated = false;
    int answer = 0;
    int index = 0;
    
    for (int i = 0; i < 26; i++) {
        if (answer < alphabet[i]) {
            isDuplicated = false;
            index = i;
            
            answer = alphabet[i];
        } else if (answer == alphabet[i]) {
            isDuplicated = true; // 중복 있음
        }
    }
    
    if (isDuplicated == true) {
        cout << "?\n";
    } else {
        cout << char(index + 65) << '\n';
    }
    
    return 0;
}
