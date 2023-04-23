//  알고리즘 수업 - 너비 우선 탐색 1
//  24444.cpp
//  Algorithm
//
//  Created by 안상희 on 2023/04/22.
//

#include <iostream>
#include <algorithm>
#include <queue>
#include <vector>

using namespace std;

// 입력이 10만, 20만이라서 인접행렬 (배열) 쓰면 메모리 초과..!
int N, M, R; // 정점의 수, 간선의 수, 시작 정점
bool visited[100001];
int answer[100001];

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
    
    int count = 1; // 방문 순서 체크
    queue<int> q;
    q.push(R); // 시작 정점 넣기
    visited[R] = true; // 방문 표시
    answer[R] = count++; // 정점 R에 몇번째로 방문했는지 체크하기 위한 배열!
    
    // 정렬
    for (int i = 1; i <= N; i++) {
        sort(matrix[i].begin(), matrix[i].end());
    }
    
    while (!q.empty()) {
        int x = q.front();
        q.pop();
        
        for (int i = 0; i < matrix[x].size(); i++) {
            int nx = matrix[x][i];
            
            if (visited[nx] || nx == 0) continue;
            
            q.push(nx);
            visited[nx] = true;
            answer[nx] = count;
            count++;
        }
    }
    
    for (int i = 1; i <= N; i++) {
        cout << answer[i] << '\n';
    }
    
    return 0;
}
