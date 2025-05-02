#include <stdio.h>
#include <math.h>

int primo(int n) {
    if (n <= 1) {
        return 0;
    }
    if (n == 2 || n == 3 || n == 5 || n == 7) {
        return 1;
    }
    if (n % 2 == 0 || n % 3 == 0 || n % 5 == 0 || n % 7 == 0) {
        return 0;
    }
    else {
        return 1;
    }
}

void processo() {
    int n;
    scanf("%d", &n);
    
    if (n == -1) {
        return;
    }
    
    printf("%d\n", primo(n));
    
    processo();
}

int main() {
    processo();
    return 0;
}