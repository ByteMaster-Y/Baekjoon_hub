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
    vector<int> A(N);
    
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    
    int count = 0;
    
    for (int i = N - 1; i >= 0; i--) {
        if (A[i] <= K) {
            count += (K / A[i]);
            K = K % A[i]; // K를 현재 동전을 사용하고 남은 금액으로 업데이트
        }
    }
    cout << count << "\n";
}
