//  촌수계산
//  2644.cpp
//  Algorithm
//
//  Created by 안상희 on 2023/04/22.
//

#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int n, targetX, targetY, m;
vector<int> v[101];
int dist[101];

int main() {
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    cin >> n >> targetX >> targetY >> m;  // 전체 사람의 수, 촌수 계산해야하는 사람의 번호 (x, y), 관계의 개수
    
    while (m--) {
        int x, y;
        cin >> x >> y;
        
        v[x].push_back(y);
        v[y].push_back(x);
    }
    
    queue<int> q;
    q.push(targetX);
    dist[targetX] = 1;
    
    while (!q.empty()) {
        int x = q.front();
        q.pop();
        
        for (int i = 0; i < v[x].size(); i++) {
            int nx = v[x][i]; // 현재 해당하는 인접 리스트와 연결된 원소 구하기
            if (dist[nx] != 0) continue; // 이미 방문했으면 continue
            
            dist[nx] = dist[x] + 1; // 거리 구해주기 (촌수 + 1)
            q.push(nx); // 새로운 원소 큐에 넣고 그 원소에 대해서 BFS
        }
    }
    
    cout << dist[targetY] - 1 << '\n';
    
    return 0;
}
