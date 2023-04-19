//  두 수 비교하기
//  1330.cpp
//  Algorithm
//
//  Created by 안상희 on 2023/04/18.
//

#include <iostream>

using namespace std;

int A, B;

int main() {
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    cin >> A >> B;
    
    if (A > B) { cout << ">\n"; }
    else if (A < B) { cout << "<\n"; }
    else if (A == B) { cout << "==\n"; }
    
    return 0;
}
