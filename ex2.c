#include <stdio.h>

void printsort(int x[5]) {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5 - i - 1; j++) {
            if (x[j] > x[j + 1]) {
                int a = x[j];
                x[j] = x[j + 1];
                x[j + 1] = a;
            }
        }
    }
}

int ex2() {
    int a, x[5];
    for (int i = 0; i < 5; i++) {
        scanf("%d", &a);
        x[i] = a;
    }
    printsort(x);
    for (int i = 0; i < 5; i++) {
        printf("%d ", x[i]);
    }
    return 0;
}