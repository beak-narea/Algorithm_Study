#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n, int w, int num) {
    int answer[100][100] = {0};
    int count = 0, row = 0, col = 0, number = 1;
    
    for(int i = 0; number <= n; i++){
        for(int j = 0; j < w && number <= n; j++, number++){
            answer[i][j] = number;
            if(number == num){
                row = i; // 목표 위치 저장
                col = j;
            }
        }
        i++;
        for(int j = w-1; j >= 0 && number <= n; j--, number++){
            answer[i][j] = number;
            if(number == num){
                row = i;
                col = j;
            }
        }
    }
    for(int i = row; i < n; i++){
        if(answer[i][col] == 0){
            break;
        }
        count++;
    }
    
    return count;
}