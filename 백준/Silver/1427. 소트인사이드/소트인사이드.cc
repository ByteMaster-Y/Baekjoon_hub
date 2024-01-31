#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    string str;
    cin >> str;
    vector<int> A(str.size(), 0);
    
    for (int i = 0; i < str.size(); i++) {
        A[i] = stoi(str.substr(i, 1));
    }
    for (int i = 0; i < str.length(); i++) {
        int Max = i;
        for (int j = i + 1; j < str.length(); j++) {
            if (A[j] > A[Max]) { // 내림차순이므로 최댓값을 찾음
                // 현재 범위에서 Max 값 찾기
                Max = j;
            }
        }
        if (A[i] < A[Max]) {
            // 현재 i의 값과 Max값 중 Max 값이 더 크면 swap 수행
            int temp = A[i];
            A[i] = A[Max];
            A[Max] = temp;
        }
    }
    for (int i = 0; i < A.size(); i++) {
        cout << A[i];
    }
}
