#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

long long solution(int price, int money, int count) {
    long long answer = -1;
    int i = 0;
    long long neededPrice = 0;
    
    for(i=1; i<=count; i++) {
        neededPrice += price*i;
    }
    if(neededPrice > money) {
        answer = neededPrice - money;    
    }
    else {
        answer = 0;
    }
    
    return answer;
}
