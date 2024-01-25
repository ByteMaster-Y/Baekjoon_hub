//
//  main.cpp
//  chat
//
//  Created by apple on 2024/01/25.
//

#include <iostream>
using namespace std;

int main(){
    int N = 0;
    int A[1000];
    cin >> N;
    
    for(int i = 0; i < N; i++){
        cin >> A[i];
    }
    
    long sum = 0;
    long max = 0;
    
    for(int i = 0; i < N; i++){
        // 최고점 판별하여 저장
        if(A[i] > max){
            max = A[i];
        }
        // 총점 계산
        sum += A[i];
    }
    
    double result = sum * 100.0 / max / N;
    cout<< result <<"\n";
    
    
}
