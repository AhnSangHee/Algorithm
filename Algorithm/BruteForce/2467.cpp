//  용액
//  2467.cpp
//  Algorithm
//
//  Created by 안상희 on 2023/05/02.
//

#include <iostream>

using namespace std;

// 산성 용액과 알칼리성 용액을 하나씩 혼합해서 0에 가까운 용액을 만들어내는 두 용액을 찾는 과정
int N; // 전체 용액의 수

int main() {
  cin.tie(0);
  cout.tie(0);
  std::ios::sync_with_stdio(false);
  
  cin >> N;
  int arr[N];
  
  for (int i = 0; i < N; i++) {
    cin >> arr[i];
  }
  
  int leftPointer = 0;
  int rightPointer = N - 1;
  
  // 0에 가까운 값을 찾기 위해 필요한 값. 0에 가까울 때까지 갱신 예정.
  int approximateSum = arr[leftPointer] + arr[rightPointer];
  
  int answerLeft = leftPointer;
  int answerRight = rightPointer;
  
  while (leftPointer < rightPointer) {
    int sum = arr[leftPointer] + arr[rightPointer];
    
    // 0에 가까운 값을 찾기 위한 포인터. 무작정 포인터를 바꾸는 게 아니라, 기존에 존재했던 것보다 더 0에 가까울 경우에만 포인터를 갱신시킨다.
    if (abs(approximateSum) > abs(sum)) {
      approximateSum = sum;
      
      answerLeft = leftPointer;
      answerRight = rightPointer;
    }
    
    if (sum < 0) { // sum을 증가시켜야 하는 상황
      leftPointer++; // 배열이 정렬되어있기 때문에, leftPointer를 증가시킨다.
    } else if (sum > 0) { // sum을 감소시켜야 하는 상황
      rightPointer--;
    } else {
      cout << arr[leftPointer] << " " << arr[rightPointer] << '\n';
      return 0;
    }
  }
  
  cout << arr[answerLeft] << " " << arr[answerRight] << '\n';
  return 0;
}
