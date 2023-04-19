//  사분면 고르기
//  14681.cpp
//  Algorithm
//
//  Created by 안상희 on 2023/04/18.
//

#include <iostream>

using namespace std;

int x, y;

int main() {
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    cin >> x >> y;
    
    if (x > 0 && y > 0) cout << 1 << '\n';
    else if (x < 0 && y > 0) cout << 2 << '\n';
    else if (x < 0 && y < 0) cout << 3 << '\n';
    else if (x > 0 && y < 0) cout << 4 << '\n';
    
    return 0;
}
