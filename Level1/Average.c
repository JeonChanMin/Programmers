#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// arr_len is the length of the array arr.
 
double solution(int arr[], size_t arr_len) {
    double answer = 0;
    
    for(int i=0;i<arr_len;i++)
        answer += arr[i];
        
    return answer/arr_len;
}
