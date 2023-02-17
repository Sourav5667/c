#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, sum, y;
    sum = 0;
    i = 5;
    i++;
    i++;
    i = i - 2;
    y = i % 2;
    if (y == 0) {
        sum = sum + i;
    }
    else {
        sum = sum - i;
    }
    printf("sum = %d", sum);
    return 0;
}
