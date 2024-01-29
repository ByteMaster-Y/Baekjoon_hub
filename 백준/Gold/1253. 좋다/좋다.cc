#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

// 문제의 핵심은 즉 K가 N이 될 때 까지 반복하며 좋은 수가 몇 개인지 세는 것
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N;
    cin >> N;
    vector<int> A(N, 0);
    
    for (int i = 0; i < N; i ++){
        cin >> A[i];
    }
    
    sort(A.begin(), A.end());
    int Result = 0;
    
    for (int k = 0; k < N; k++){
        long find = A[k];
        int i = 0;
        int j = N - 1;
        
        while (i < j) {
            if (A[i] + A[j] ==  find) { // 서로 다른 수의 합인지 체크!
                if (i != k && j != k) {
                    Result++;
                    break;
                }
                else if (i == k) {
                    i++;
                }
                else if (j == k) {
                    j--;
                }
            }
            else if (A[i] +  A[j] < find) {
                i++;
            }
            else {
                j--;
            }
        }
    }
    cout << Result << "\n";

}
