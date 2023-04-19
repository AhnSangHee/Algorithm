//  알파벳 찾기
//  10809.cpp
//  Algorithm
//
//  Created by 안상희 on 2023/04/18.
//

#include <iostream>
#include <string>

using namespace std;

string s;
int alphabet[26] = { 0, };

int main() {
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    cin >> s;
    
    for (int i = 0; i < 26; i++) {
        alphabet[i] = -1;
    }
    
    for (int i = 0; i < s.size(); i++) {
        if (alphabet[s[i] - 'a'] == -1) { // 한번도 등장하지 않았다면!
            alphabet[s[i] - 'a'] = i;
        }
    }
    
    for (int i = 0; i < 26; i++) {
        cout << alphabet[i] << " ";
    }
    return 0;
}
