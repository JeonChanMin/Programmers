#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

long long solution(int a, int b) {
    long long answer = 0;
    int i;
    
    // 1. b�� a���� ū ���
    if (a < b) { 
        for (i = a; i <= b; i++) { 
            answer += i; 
        } 
    } 
    // 2. a�� b���� ū ��� 
    else if (a > b) { 
        for (i = b; i <= a; i++) { 
            answer += i; 
        } 
    } 
    // 3. a�� b�� ���� ��� 
    else if (a == b) { 
        answer = a; 
    } 
    return answer;

}
