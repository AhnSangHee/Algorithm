//  알고리즘 수업 - 너비 우선 탐색 3
//  24446.cpp
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
int answer[100001];

int main() {
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    cin >> N >> M >> R;
    
    for (int i = 0; i < 100001; i++) {
        answer[i] = -1;
    }
    
    vector<int> matrix[N + 1];
    
    while (M--) {
        int u, v;
        cin >> u >> v;
        
        matrix[u].push_back(v);
        matrix[v].push_back(u);
    }
    
    queue<int> q;
    q.push(R);
    
    int count = 0;
    visited[R] = true;
    answer[R] = count++;
    
    while (!q.empty()) {
        int x = q.front();
        q.pop();
        
        count = 1;
        for (int i = 0; i < matrix[x].size(); i++) {
            int nx = matrix[x][i];
            
            if (visited[nx] || nx == 0) continue;
            
            q.push(nx);
            visited[nx] = true;
            answer[nx] = answer[x] + 1;
        }
    }
    
    for (int i = 1; i <= N; i++) {
        cout << answer[i] << '\n';
    }
    
    return 0;
}
