#include <iostream>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N;
    cin >> N;
    int count = 1; // Ndl 15일 때 숫자 15만 뽑는 경우의 수를 미리 넣고 초기화
    int start_idx = 1;
    int end_idx = 1;
    int sum = 1;
    
    while (end_idx != N) {
        if (sum == N) { // 답을 찾았을 때
            count++;
            end_idx++;
            sum = sum + end_idx;
        }
        
        else if (sum > N) { // 현재 합이 답 보다 클 때
            sum = sum - start_idx;
            start_idx++;
        }
        
        else { // 현재 합이 답보다 작을 때
            end_idx++;
            sum = sum + end_idx;
        }
    }
    cout << count << "\n";

    
}
