//  최소, 최대
//  10818.cpp
//  Algorithm
//
//  Created by 안상희 on 2023/04/17.
//

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int N;
vector<int> v;

int main() {
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    cin >> N;
    for (int i = 0; i < N; i++) {
        int num;
        cin >> num;
        v.push_back(num);
    }
    
    sort(v.begin(), v.end());
    
    cout << v.front() << " " << v.back() << '\n';
    return 0;
}
