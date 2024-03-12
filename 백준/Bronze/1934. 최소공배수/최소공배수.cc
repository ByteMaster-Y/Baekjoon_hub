#include <iostream>
using namespace std;

int gcd(int a, int b);
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t;
    cin >> t;
    
    for (int i = 0; i < t; i++) {
        int a, b;
        cin >> a >> b;
        int result = a * b / gcd(a, b);
        cout << result << "\n";
    }
}

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    else { // 재귀 함수로 구현 -> gcd(작은 수, 큰 수 % 작은 수 )
        return gcd(b, a % b);
    }
}

