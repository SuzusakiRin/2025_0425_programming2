#include <stdio.h>

void printsort(int x[5]) {
    // AI補完に屈せずに自分で考えれた！！！偉い！！！！！！！
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (x[i] < x[j]) {
                int a = x[i];
                x[i] = x[j];
                x[j] = a;
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