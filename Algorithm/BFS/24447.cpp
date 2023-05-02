//  알고리즘 수업 - 너비 우선 탐색 4
//  24447.cpp
//  Algorithm
//
//  Created by 안상희 on 2023/04/23.
//

#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;

int N, M, R;
bool visited[100001];
long long int answer[100001];
long long int answer2[100001];

int main() {
  cin.tie(0);
  cout.tie(0);
  std::ios::sync_with_stdio(false);
  
  cin >> N >> M >> R;
  
  vector<int> matrix[N + 1];
  
  while (M--) {
    int u, v;
    cin >> u >> v;
    
    matrix[u].push_back(v);
    matrix[v].push_back(u);
  }
  
  for (int i = 1; i < matrix[i].size(); i++) {
    sort(matrix[i].begin(), matrix[i].end());
  }
  
  queue<int> q;
  q.push(R);
  
  int depthCount = 1;
  answer[R] = 0;
  answer2[R] = depthCount++;
  visited[R] = true;
  
  while (!q.empty()) {
    int x = q.front();
    q.pop();
    
    for (int i = 0; i < matrix[x].size(); i++) {
      int nx = matrix[x][i];
      
      if (visited[nx] || nx == 0) continue;
      
      q.push(nx);
      answer[nx] = answer[x] + 1;
      answer2[nx] = depthCount++;
      visited[nx] = true;
    }
  }
  
  long long int sum = 0;
  for (int i = 1; i <= N; i++) {
    sum += ((long long int)answer[i] * (long long int)answer2[i]);
  }
  
  cout << sum << '\n';
  return 0;
}
