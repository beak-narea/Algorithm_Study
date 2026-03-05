#include <stdio.h>

int main(){
    int n;
    long long sum = 0, ex;
    scanf("%d", &n);
    
    for(int i = 1; i <= n; i++){
        sum += i;
    }
    ex = sum * sum;
    printf("%lld\n%lld\n%lld", sum, ex, ex);
    
    return 0;
}