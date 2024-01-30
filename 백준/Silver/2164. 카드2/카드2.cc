#include <iostream>
#include <queue>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    queue<int> myQueue;
    int N;
    cin >> N;
        
    for (int i = 1; i <= N; i++) {
        myQueue.push(i);
    }
    while(myQueue.size() > 1) { // 카드가 1장 남을 때 까지
        myQueue.pop();
        myQueue.push(myQueue.front());
        myQueue.pop();
    }
    cout << myQueue.front();
    
    
}
