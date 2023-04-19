//  최댓값
//  2562.cpp
//  Algorithm
//
//  Created by 안상희 on 2023/04/18.
//

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector<int> v;
int maxValue = 1;
int maxIndex = 0;

int main() {
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    for (int i = 1; i <= 9; i++) {
        int num;
        cin >> num;
        v.push_back(num);
        
        if (maxValue < num) {
            maxValue = num;
            maxIndex = i;
        }
    }
    
    cout << maxValue << '\n' << maxIndex << '\n';
    return 0;
}
