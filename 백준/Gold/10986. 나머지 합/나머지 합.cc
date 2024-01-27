//
//  main.cpp
//  Baekjoon
//
//  Created by apple on 2024/01/27.
//

#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

int N, M, temp;
long long cnt[1001];
long long sum, ans;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> M;

    for (int i = 0; i < N; i++)
    {
        cin >> temp;
        sum += temp;
        cnt[sum % M]++;
    }

    for (int i = 0; i <= 1000; i++)
    {    // 나머지가 같은 인덱스 중 2개를 뽑는 경우의 수 더하기
        ans += cnt[i] * (cnt[i] - 1) / 2;
    }
    
    // 만약에 cnt[0]을 더하지 않는다면,
    // 나머지가 0인 경우에 해당하는 쌍이 빠져서 결과가 부정확해질 수 있습니다.
    cout << cnt[0] + ans << "\n";
}
