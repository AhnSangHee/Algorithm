//  2007년
//  1924.cpp
//  Algorithm
//
//  Created by 안상희 on 2023/04/17.
//

#include <iostream>

using namespace std;

int x, y;
int daysInMonth[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
string dayOfTheWeek[7] = { "SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT" };
int day;

int main() {
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    cin >> x >> y;
    
    for (int i = 0; i < x - 1; i++) {
        day += daysInMonth[i];
    }
    day += y; // 일 수 구하기
    
    cout << dayOfTheWeek[day % 7] << '\n';
    
    return 0;
}
