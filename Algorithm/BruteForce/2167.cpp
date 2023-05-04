//  2차원 배열의 합
//  2167.cpp
//  Algorithm
//
//  Created by 안상희 on 2023/05/04.
//

#include <iostream>

using namespace std;

int N, M, K;
int arr[301][301];
int psum[301][301];

int main() {
  cin.tie(0);
  cout.tie(0);
  std::ios::sync_with_stdio(false);
  
  cin >> N >> M;
  
  for (int i = 1; i <= N; i++) {
    for (int j = 1; j <= M; j++) {
      cin >> arr[i][j];
      
      psum[i][j] = psum[i - 1][j] + psum[i][j - 1] + arr[i][j] - psum[i - 1][j - 1];
    }
  }
  
  cin >> K;
  while (K--) {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    
    cout << psum[c][d] - psum[c][b - 1] - psum[a - 1][d] + psum[a - 1][b - 1] << '\n';
  }
  
  return 0;
}
