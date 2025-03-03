#include <stdio.h>
#include <stdlib.h>
int compare(const int* a, const int* b) {
	return(*a - *b);
}
int main(){
    int n, sum = 0;
    int num[1000] = {0};
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d", &num[i]);
        
    }
    qsort(num, n, sizeof(int), compare);
    for(int i = 0; i < n; i++){
        if(i != 0){
            num[i] = num[i] + num[i-1];
        }
        sum += num[i];
    }
    printf("%d", sum);
    return 0;
}