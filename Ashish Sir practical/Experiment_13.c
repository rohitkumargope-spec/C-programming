#include <stdio.h>

int main() {
    int i;

    for (i = 1; i <= 10; i++) {
        if (i == 5) {
            break;   // exits loop when i is 5
        }
        printf("%d ", i);
    }

    return 0;
}
