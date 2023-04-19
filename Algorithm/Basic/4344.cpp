//  평균은 넘겠지
//  4344.cpp
//  Algorithm
//
//  Created by 안상희 on 2023/04/18.
//

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int C;

int main() {
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    cin >> C;
    
    while (C--) {
        int N;
        cin >> N;
        
        int sum = 0;
        double average = 0;
        vector<int> v;
        for (int i = 0; i < N; i++) {
            int score;
            cin >> score;
            
            v.push_back(score);
            sum += score;
        }
        average = (double)sum / (double)N;
        sort(v.begin(), v.end());
        
        int goodStudent = 0;
        for (int i = 0; i < N; i++) {
            if (v[i] > average) { goodStudent++; }
        }
        cout << fixed;
        cout.precision(3);
        cout << double(goodStudent) / double(N) * 100 << "%\n";
    }
    
    return 0;
}
