#include <stdio.h>

int main() {
    int n, d;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Prime digits: ");
    while(n > 0) {
        d = n % 10;
        if(d == 2 || d == 3 || d == 5 || d == 7) {
            printf("%d ", d);
        }
        n /= 10;
    }
    return 0;
}
