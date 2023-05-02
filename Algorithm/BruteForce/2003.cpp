//  수들의 합 2
//  2003.cpp
//  Algorithm
//
//  Created by 안상희 on 2023/05/01.
//

#include <iostream>

using namespace std;

int N, M; // N개로 이루어진 수열의 합이 M이 되는 경우의 수를 구하기!

int main() {
  cin.tie(0);
  cout.tie(0);
  std::ios::sync_with_stdio(false);
  
  cin >> N >> M;
  int arr[N];
  
  for (int i = 0; i < N; i++) {
    cin >> arr[i];
  }
  
  int leftPointer = 0;
  int rightPointer = 0;
  int answer = 0;
  
  while (leftPointer <= rightPointer && rightPointer != N) {
    int sum = 0;
    for (int i = leftPointer; i <= rightPointer; i++) {
      sum += arr[i];
    }
    
    if (sum > M) {
      // M보다 합이 클 경우, leftPointer 증가시키기. rightPoint를 증가시켜봤자 이미 M을 넘기 때문에 의미가 없다.
      // leftPointer와 rightPointer가 같은 경우에는, left가 아닌 right를 증가시켜줘야 역전하는 상황이 생기지 않는다.
      if (leftPointer == rightPointer) { rightPointer++; }
      else { leftPointer++; }
    } else if (sum < M) {
      // M보다 합이 작을 경우, rightPointer 증가시키기
      rightPointer++;
    } else {
      answer++;
      rightPointer++; // rightPointer 증가시켜야함!
//      leftPointer++; 구간에 숫자가 1개만 존재할 때 (leftPointer와 rightPointer가 가리키는 위치가 같을 경우), sum이 M을 만족하는 경우가 있을 수 있다. 만약 여기서 leftPointer를 증가시킨다면, 이 경우 또한 leftPointer가 rightPointer를 역전하는 상황이 되기 때문에, 무조건 rightPointer를 증가시켜야한다!
    }
  }
  
  cout << answer << '\n';
  return 0;
}
