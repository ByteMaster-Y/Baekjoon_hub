#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N, M;
    cin >> N;
    vector<int> A(N);
    
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    
    sort(A.begin(), A.end());
    
    cin >> M;
    
    for (int i = 0; i < M; i++) {
        bool find = false;
        int target;
        cin >> target;
        
        // 이진 탐색 시작
        int start = 0;
        int end = A.size() - 1;
        
        while (start <= end) {
            int mid = (start + end) / 2; // 중간 인덱스
            int midV = A[mid]; // 중간 인덱스에 있는 값
            
            if (midV > target) {
                end = mid - 1; // 왼쪽 부분 탐색
            } else if (midV < target) {
                start = mid + 1; // 오른쪽 부분 탐색
            } else {
                find = true;
                break;
            }
        }
        
        if (find) {
            cout << 1 << "\n";
        }
        else {
            cout << 0 << "\n";
        }
    }
    
    return 0;
}
