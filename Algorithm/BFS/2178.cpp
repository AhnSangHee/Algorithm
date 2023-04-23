//  미로 탐색
//  2178.cpp
//  Algorithm
//
//  Created by 안상희 on 2023/04/23.
//

#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int N, M;
char miro[101][101];
int dist[101][101];
queue<pair<int, int>> q;
int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };

int main() {
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    cin >> N >> M;
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> miro[i][j];
        }
    }
    
    q.push({ 0, 0 });
    dist[0][0] = 1;
    
    while (!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        
        for (int dir = 0; dir < 4; dir++) {
            int nx = x + dx[dir];
            int ny = y + dy[dir];
            
            if (nx < 0 || ny < 0 || nx >= N || ny >= M) continue;
            if (miro[nx][ny] == '0' || dist[nx][ny] != 0) continue;
            
            dist[nx][ny] = dist[x][y] + 1;
            q.push({ nx, ny });
        }
    }
    
    cout << dist[N - 1][M - 1] << '\n';
    return 0;
}
