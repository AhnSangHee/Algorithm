//  문자열 반복
//  2675.cpp
//  Algorithm
//
//  Created by 안상희 on 2023/04/19.
//

#include <iostream>
#include <string>

using namespace std;

int T, R;
string S;

int main() {
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    cin >> T;
    
    while (T--) {
        cin >> R >> S;
        
        for (int i = 0; i < S.size(); i++) {
            for (int j = 0; j < R; j++) {
                cout << S[i];
            }
        }
        cout << '\n';
    }
    
    return 0;
}
