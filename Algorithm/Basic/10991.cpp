//  별 찍기 - 16
//  10991.cpp
//  Algorithm
//
//  Created by 안상희 on 2023/04/17.
//

#include <iostream>

using namespace std;

int N;

int main(void) {
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    cin >> N;
    
    // 첫째 줄 : * 하나
    // 둘째 줄 : * 공백 *, 별이 2개, 공백이 1개
    // 셋째 줄 : * 공백 * 공백 *, 별이 3개, 공백이 2개
    // 넷째 줄 : * 공백 * 공백 * 공백 *, 별이 4개, 공백이 3개
    // N째 줄 : 별이 N개, 공백이 N-1 개. 별 사이 마다 공백 하나씩..
    // 무조건 *이 먼저 나오고, * 나오면 뒤에 무조건 공백 나옴.
    for (int i = 1; i <= N; i++) {
        
        for (int j = i; j < N; j++) {
            cout << " ";
        }

        for (int j = 1; j <= i * 2 - 1; j++) {
            if (j % 2 == 1) { cout << "*"; }
            else { cout << " "; }
        }
        
        cout << '\n';
    }
    
    return 0;
}
