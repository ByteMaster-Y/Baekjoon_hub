//
//  main.cpp
//  Baekjoon
//
//  Created by apple on 2024/01/27.
//

#include <iostream>
#include <vector>
using namespace std;

int main(){
    // c++에서 시간 단축을 위한 구문, 시간을 초과하는 문제가 이 3개 구문추가로 간단하게 해결됩니다.
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N, M;
    cin >> N >> M;
    
    // vector<vector<int>> A(N + 1, vector<int>(N + 1, 0));:
    // 2차원 벡터 A를 선언하고 초기화합니다. A는 크기가 (N+1) x (N+1)이며, 모든 요소는 0으로 초기화됩니다.
    vector<vector<int>> A(N + 1, vector<int>(N + 1, 0));
    vector<vector<int>> D(N + 1, vector<int>(N + 1, 0));
    
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            cin >> A[i][j];
            D[i][j] = D[i][j - 1] +  D[i - 1][j] - D[i - 1][j - 1] + A[i][j];
        }
    }
    
    for (int i = 0; i < M; i++) {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        // 구간 합 배열로 질의에 답변하기
        int result = D[x2][y2] - D[x1 - 1][y2] - D[x2][y1 - 1] + D[x1 - 1][y1 - 1];
        cout << result << "\n";
    }
    
}
