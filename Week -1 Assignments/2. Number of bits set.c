#include <stdio.h>

int main() {
    int num;
    int count = 0;
    printf("Enter an integer: ");
    scanf("%d", &num);
    while (num) {
        count += num & 1;
        num >>= 1;
    }
    printf("Count of Set bits: %d\n", count);
    return 0;
}
