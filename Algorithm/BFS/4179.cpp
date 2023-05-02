//  불!
//  4179.cpp
//  Algorithm
//
//  Created by 안상희 on 2023/04/24.
//

#include <iostream>
#include <queue>

using namespace std;

int R, C;
char miro[1001][1001];
queue<pair<int, int>> jihoonQueue;
queue<pair<int, int>> fireQueue;
int jihoonVisited[1001][1001];
int fireVisited[1001][1001];
int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };

int main() {
  cin.tie(0);
  cout.tie(0);
  std::ios::sync_with_stdio(false);
  
  cin >> R >> C;
  
  // 미로 입력 받기
  for (int i = 0; i < R; i++) {
    for (int j = 0; j < C; j++) {
      cin >> miro[i][j];
      
      if (miro[i][j] == 'F') { // 초기 불의 위치
        fireQueue.push({ i, j });
        fireVisited[i][j] = 1; // 방문 표시 (거리 1)
      }
      
      if (miro[i][j] == 'J') { // 초기 지훈이 위치
        jihoonQueue.push({ i, j });
        jihoonVisited[i][j] = 1; // 방문 표시 (거리 1)
      }
    }
  }
  
  // 불에 대해서 BFS
  while (!fireQueue.empty()) {
    int x = fireQueue.front().first;
    int y = fireQueue.front().second;
    fireQueue.pop();
    
    for (int dir = 0; dir < 4; dir++) {
      int nx = x + dx[dir];
      int ny = y + dy[dir];
      
      // 범위 벗어나는 경우
      if (nx < 0 || ny < 0 || nx >= R || ny >= C) continue;
      // 이미 방문했거나, 벽이거나, 불이 났을 경우
      if (fireVisited[nx][ny] != 0 || miro[nx][ny] == '#' || miro[nx][ny] == 'F') continue;
      
      fireQueue.push({ nx, ny });
      fireVisited[nx][ny] = fireVisited[x][y] + 1;
    }
  }
  
  // 지훈이에 대해서 BFS
  while (!jihoonQueue.empty()) {
    int x = jihoonQueue.front().first;
    int y = jihoonQueue.front().second;
    jihoonQueue.pop();
    
    for (int dir = 0; dir < 4; dir++) {
      int nx = x + dx[dir];
      int ny = y + dy[dir];
      
      // 범위를 벗어났다는 것은 탈출에 성공한 것
      if (nx < 0 || ny < 0 || nx >= R || ny >= C) {
        cout << jihoonVisited[x][y] << '\n';
        return 0;
      }
      
      // 이미 방문했거나, 벽이거나, 불이 났을 경우
      if (jihoonVisited[nx][ny] != 0 || miro[nx][ny] == '#' || miro[nx][ny] == 'F') continue;
      
      // 지훈이가 도착한 시간과 동시에 불이 도착하거나, 혹은 자신보다 더 빨리 불이 도착하는 자리로는 갈 수 없음
      // 불이 퍼졌거나, 지훈이보다 불이 먼저 퍼질 경우
      // 여기서 dist1[nx][ny] <= dist2[x][y] + 1에서, dist2[nx][ny]가 아닌 dist2[x][y] + 1을 해주는 이유는
      // dist2[nx][ny]의 값은 아직 계산되지 않았기 때문이다.
      // 0이 아닌 경우 조건을 붙이는 이유는, 0이면 애초에 방문하지도 않은거니까.. 0이면 방문 가능하게 되므로 0이 아닌 조건 붙여줌!
      if (fireVisited[nx][ny] != 0 && (fireVisited[nx][ny] <= jihoonVisited[x][y] + 1)) continue;
      
      jihoonQueue.push({ nx, ny });
      jihoonVisited[nx][ny] = jihoonVisited[x][y] + 1;
    }
  }
  
  cout << "IMPOSSIBLE\n";
  
  return 0;
}
