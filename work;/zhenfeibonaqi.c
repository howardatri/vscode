#include <stdio.h>
long long fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    long long first = 0, second = 1, third;
    for (int i = 2; i < n; i++) {
        third = first + second;
        first = second;
        second = third;
    }
    return third;
}

int main() {
    int n;
    scanf("%d", &n);
    

    long long rabbits = fibonacci(n + 2); 
    printf("%lld\n",rabbits);
    
    return 0;
}







