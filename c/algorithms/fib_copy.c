#include <stdio.h>
#include <stdlib.h>

void fibonacci(int n) {
    long a = 0;
    long b = 1;
    
    for (int i = 0; i < n; i++) {
        printf("%ld\n", a);
        long temp = a;
        a = b;
        b = temp + b;
    }
}

int main() {
    int num;
    printf("Count:~$ ");
    scanf("%d", &num);
    fibonacci(num);
    return 0;
}