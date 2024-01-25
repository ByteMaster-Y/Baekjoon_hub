//
//  main.cpp
//  chat
//
//  Created by apple on 2024/01/25.
//

// 서버 코드 (server.cpp)
#include <iostream>
#include <string>

using namespace std;

int main(){
    int N = 0;
    string numbers;
    cin >> N;
    cin >> numbers;
    
    int sum = 0;
    
    for(int i = 0; i < numbers.length(); i++){
        // '1'은 아스키코드 49이므로, 문자 '1'을 1로 얻고 싶다면
        // '1' - 48 또는 '1' - '0'을 해준다.
        sum += numbers[i] - '0';
        
    }
    
    cout << sum <<"\n";
}
