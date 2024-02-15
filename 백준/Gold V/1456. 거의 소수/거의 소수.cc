#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    long Min, Max;
    cin >> Min >> Max;
    long A[10000001];
    
    for (int i = 2; i < 10000001; i++) {
        A[i] = i;
    }
    // 제곱근 까지만 수행한 후 남은 배수 지우기
    for (int i = 2; i <= sqrt(10000001); i++) {
        if (A[i] == 0) {
            continue;
        }
        for (int j = i + i; j < 10000001; j = j + i) {
            A[j] = 0;
        }
    }
    
    int count = 0;
    
    for (int i = 2; i < 10000001; i++) {
        if(A[i] != 0) {
            long temp = A[i];
            
            // 현재 소수의 제곱은이 Max보다 작을 때 기준이지만
            // 곱셈이 long의 범위를 넘어갈 수 있어 이항정리로 처
            while ((double)A[i] <= (double)Max / (double)temp) {
                if((double)A[i] >= (double)Min / (double)temp) {
                    count++;
                }
                temp = temp * A[i];
            }
        }
    }
    cout << count << "\n";
}
