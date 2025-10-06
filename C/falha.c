#include <stdio.h>

int main() {
    int t, i, c;
    scanf("%d", &t);
    if (t < 1 || t > 100) {
        return 0;
    }

    int n[t];
    for (c = 0; c < t; c++) {
        scanf("%d", &i);
        if (i < 0 || i > 10000) { return 0; }
        n[c] = i;
    }

    for (c = 1; c < t; c++) {
        if (n[c-1] > n[c]) {
        	printf("%d\n", c+1);
            return 0;
        }
    }
    printf("0\n");
    return 0;
}

