//  소수의 연속합
//  1644.cpp
//  Algorithm
//
//  Created by 안상희 on 2023/05/04.
//

#include <iostream>
#include <vector>

using namespace std;

int N;
int number = 4000001;
int arr[4000001];
vector<int> v;
int answer = 0;

void getDecimal() {
  for (int i = 2; i < number; i++) {
    arr[i] = i;
  }
  
  for (int i = 2; i < number; i++) {
    if (arr[i] == 0) continue;
    
    if (i * 2 >= number) continue;
    for (int j = i * 2; j < number; j += i) {
      arr[j] = 0;
    }
  } 
}

int main() {
  cin.tie(0);
  cout.tie(0);
  std::ios::sync_with_stdio(false);
  
  cin >> N;
  
  getDecimal();
  
  for (int i = 2; i < number; i++) {
    if (arr[i] > N) break;
    if (arr[i] != 0) { v.push_back(arr[i]); } // 소수만 벡터에 저장하기
  }
  
  // 연속된 소수들의 합으로 구해야한다.. -> 구간.. -> 같은 방향에서 포인터가 이동하는 문제
  int leftPointer = 0;
  int rightPointer = 0;
  int sum = 0;
  
  if (!v.empty()) sum += v[0];
  
  while (leftPointer <= rightPointer && rightPointer != v.size()) {
    if (sum < N) { // sum 증가시켜야함
      rightPointer++;
      sum += v[rightPointer];
    } else if (sum > N) { // sum 감소시켜야 함
      if (leftPointer == rightPointer) {
        rightPointer++; // 역전되면 안돼!
        
        if (rightPointer != v.size()) {
          sum += v[rightPointer];
        }
      }
      else {
        sum -= v[leftPointer];
        leftPointer++;
      }
    } else {
      answer++;
      rightPointer++;
      
      if (rightPointer != v.size()) {
        sum += v[rightPointer];
      }
    }
  }
  
  cout << answer << '\n';
  return 0;
}
