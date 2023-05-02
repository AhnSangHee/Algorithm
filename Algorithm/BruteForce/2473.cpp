//  세 용액
//  2473.cpp
//  Algorithm
//
//  Created by 안상희 on 2023/05/02.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N;
typedef long long ll;
vector<ll> v;

int main() {
  cin.tie(0);
  cout.tie(0);
  std::ios::sync_with_stdio(false);
  
  cin >> N;
  
  for (int i = 0; i < N; i++) {
    ll num;
    cin >> num;
    v.push_back(num);
  }
  
  sort(v.begin(), v.end());
  
  ll leftPointer = 1;
  ll rightPointer = N - 1;
  ll anotherPointer = 0;
  
  // 0에 가까운 값을 찾기 위해 필요한 값. 0에 가까울 때까지 갱신 예정.
  ll approximateSum = v[leftPointer] + v[rightPointer] + v[anotherPointer];
  
  ll answerLeft = 0;
  ll answerRight = 0;
  ll answerAnotherPoint = 0;
  
  // anotherPointer을 i로 관리. N-2까지 하는 이유는 leftPointer, rightPointer는 각각 N-2, N-1에 있을거거든!
  for (int i = 0; i < N - 2; i++) {
    anotherPointer = i;
    leftPointer = i + 1;
    rightPointer = N - 1;
    
    while (leftPointer < rightPointer) {
      ll sum = v[anotherPointer] + v[leftPointer] + v[rightPointer];
      
      // 0에 가까운 값을 찾아 갱신시키기
      if (abs(approximateSum) > abs(sum)) {
        approximateSum = sum;
        
        answerLeft = leftPointer;
        answerRight = rightPointer;
        answerAnotherPoint = anotherPointer;
      }
      
      if (sum < 0) { // sum을 증가시켜야 하는 상황
        leftPointer++;
      } else if (sum > 0) { // sum을 감소시켜야 하는 상황
        rightPointer--;
      } else {
        cout << v[anotherPointer] << " " << v[leftPointer] << " " << v[rightPointer];
        return 0;
      }
    }
  }
  
  cout << v[answerAnotherPoint] << " " << v[answerLeft] << " " << v[answerRight] << '\n';
  return 0;
}
