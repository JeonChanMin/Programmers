#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

long long solution(int a, int b) {
    long long answer = 0;
    int i;
    
    // 1. b가 a보다 큰 경우
    if (a < b) { 
        for (i = a; i <= b; i++) { 
            answer += i; 
        } 
    } 
    // 2. a가 b보다 큰 경우 
    else if (a > b) { 
        for (i = b; i <= a; i++) { 
            answer += i; 
        } 
    } 
    // 3. a와 b가 같은 경우 
    else if (a == b) { 
        answer = a; 
    } 
    return answer;

}
