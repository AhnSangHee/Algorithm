//  주몽
//  1940.cpp
//  Algorithm
//
//  Created by 안상희 on 2023/05/01.
//

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int N, M; // 재료 개수, 갑옷을 만드는 데 필요한 수
// 재료 고유 번호의 합이 M이 되면 갑옷이 만들어진다.
vector<int> v;

int main() {
  cin.tie(0);
  cout.tie(0);
  std::ios::sync_with_stdio(false);
  
  cin >> N >> M;
  
  for (int i = 0; i < N; i++) {
    int num;
    cin >> num;
    v.push_back(num);
  }
  
  sort(v.begin(), v.end());
  
  int leftPointer = 0;
  int rightPointer = N - 1;
  int answer = 0;
  
  while (leftPointer < rightPointer) {
    int sum = v[leftPointer] + v[rightPointer];
    
    if (sum < M) {
      leftPointer++; // sum이 M보다 작기 때문에, leftPointer를 증가시켜서 M을 증가시킨다!
    } else if (sum > M) {
      // sum이 M보다 크면, sum을 줄여야 한다. 현재 벡터는 오름차순이므로, rightPointer가 1 증가해봤자, 어차피 결국 sum은 M보다 크다.
      // 그래서 leftPointer를 증가시키는 게 아닌, rightPointer를 감소시켜야 한다.
      rightPointer--;
    } else {
      answer++;
      rightPointer--; // leftPointer++ 해도 상관없음
    }
  }
  
  cout << answer << '\n';
  return 0;
}
