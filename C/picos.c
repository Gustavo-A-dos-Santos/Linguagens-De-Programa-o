#include <stdio.h>

int main() {
    int t, i, c;
    scanf("%d", &t);
    if (t < 1 || t > 100) {
        return 0;
    }

    int n[t], padrao[t];
    for (c = 0; c < t; c++) {
        scanf("%d", &i);
        if (i > 10000 || i < -10000) { return 0; }
        n[c] = i;
    }

    for (c = 1; c < t; c++) {
        if (n[c-1] < n[c]) {
            padrao[c] = 1;
        } else if (n[c-1] > n[c]) {
            padrao[c] = 0;
        } else {
            printf("0\n");
            return 0;
        }
    }

    if (n[0] < n[1]) {
        padrao[0] = 0;
    } else if (n[0] > n[1]) {
        padrao[0] = 1;
    } else {
        printf("0\n");
        return 0;
    }
    for (c = 1; c < t; c++) {
        if (padrao[c-1]==padrao[c]) {
            printf("0\n");
            return 0;
        }
    }

    printf("1\n");
    return 0;
}

