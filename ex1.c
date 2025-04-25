#include <stdio.h>

void plus(int x[3],int y[3],int z[3]) {
    for (int i = 0; i < 3; i++) {
        z[i] = x[i] + y[i];
    }
}

int ex1() {
    int x[3] = {1, 2, 3};
    int y[3] = {4, 5, 6};
    int z[3];
    plus(x, y, z);
    printf("”z—ña=%d %d %d\n", x[0], x[1], x[2]);
    printf("”z—ñb=%d %d %d\n", y[0], y[1], y[2]);
    printf("”z—ñc=%d %d %d\n", z[0], z[1], z[2]);
    return 0;
}
