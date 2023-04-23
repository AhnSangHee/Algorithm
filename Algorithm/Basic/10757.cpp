//  큰 수 A+B
//  10757.cpp
//  Algorithm
//
//  Created by 안상희 on 2023/04/22.
//

#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

string A, B;
vector<int> v;
int a[10000] = {0, }, b[10000] = {0, };
int sum, carry;

int main(void) {
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    cin >> A >> B;
    
    int s1 = A.length(); // s1의 길이
    int s2 = B.length(); // s2의 길이
    
    // 자리수 맞춰주기
    if (s1 > s2) {
        string tmp = B;
        B = "";
        for (int i = 0; i < s1-s2; i++) {
            B += "0";
        }
        B += tmp;
    }
    else {
        string tmp = A;
        A = "";
        for (int i = 0; i < s2-s1; i++) {
            A += "0";
        }
        A += tmp;
    }

    bool b = false;
    int len = A.length();
    for (int i = len - 1; i >= 0; i--) {
        sum = A[i]-'0' + B[i]-'0';
        if (b) {
            sum += 1;
        }
        b = false;
        
        if (sum >= 10) {
            b = true;
            v.push_back(sum-10);
            continue;
        }
        
        v.push_back(sum);
    }
    if (b) v.push_back(1);
    
    reverse(v.begin(), v.end());
    
    for (int i = 0; i < v.size(); i++) {
        cout << v[i];
    }
    cout << "\n";
    return 0;
}
