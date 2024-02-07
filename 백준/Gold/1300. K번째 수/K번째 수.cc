#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N, K;
    cin >> N >> K;
    long long start = 1, end = K;
    long long ans = 0;
    
    // 이진 탐색 수행
    while (start <= end) {
        long long middle = start + (end - start) / 2;
        long long cnt = 0;
        
        // 중앙값보다 작은 수는 몇 개인지 계산
        for (int i = 1; i <= N; i++) {
            cnt += min(middle / i, (long long)N); // 작은 수를 카운트하는 핵심 로직
        }
        if (cnt < K) {
            start = middle + 1;
        }
        else {
            ans = middle; // 현재 단계의 중앙값을 정답 변수에 저장
            end = middle - 1;
        }
    }
    cout << ans << endl;
    return 0;
}
