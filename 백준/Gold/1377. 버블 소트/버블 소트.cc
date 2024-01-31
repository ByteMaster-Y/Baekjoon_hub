#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N;
    cin >> N;
    vector<pair<int, int>> A(N);
    
    for (int i = 0; i < N; i++) {
        cin  >> A[i].first;
        A[i].second = i;
    }
    
    sort(A.begin(), A.end()); // 배열 A의 정렬 시간 복잡도: O(nlogn)
    int max = 0;
    
    for (int i = 0; i < N; i++) {
        // 정렬 전 인덱스 - 정렬 후 인덱스를 계산한 값 중에 최댓값을 찾아 저장
        if (max < A[i].second - i) {
            max = A[i].second - i;
        }
    }
    cout << max + 1;
    
    
    
}
