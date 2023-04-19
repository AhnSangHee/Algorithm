//  평균
//  1546.cpp
//  Algorithm
//
//  Created by 안상희 on 2023/04/18.
//

#include <iostream>
#include <algorithm>
#include <vector>

int N;
double sum, average;
vector<double> v;

int main() {
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);

    cin >> N;

    for (int i = 0; i < N; i++) {
        int score;
        cin >> score;

        v.push_back(score);
    }

    sort(v.begin(), v.end());

    for (int i = 0; i < N; i++) {
        v[i] = v[i] / v[N - 1] * 100;
        sum += v[i];
    }

    average = sum / N;

    cout << fixed;
    cout.precision(8);
    cout << average << '\n';

    return 0;
}
