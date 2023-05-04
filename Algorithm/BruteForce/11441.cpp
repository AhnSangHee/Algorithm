//  합 구하기
//  11441.cpp
//  Algorithm
//
//  Created by 안상희 on 2023/05/04.
//

#include <iostream>

using namespace std;

int N, M;
int arr[100001];
int psum[100001];

int main() {
  cin.tie(0);
  cout.tie(0);
  std::ios::sync_with_stdio(false);
  
  cin >> N;
  for (int i = 1; i <= N; i++) {
    cin >> arr[i];
    
    psum[i] = psum[i - 1] + arr[i];
  }
  
  cin >> M;
  while (M--) {
    int i, j;
    cin >> i >> j;
    
    cout << psum[j] - psum[i - 1] << '\n';
  }
  
  return 0;
}
