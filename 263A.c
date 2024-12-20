// https://codeforces.com/problemset/problem/263/A

#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, x, m;

    for (i = 0; i < 25; i++) {
        scanf("%d", &x);
        if (x == 1) m = i;
    }

    printf("%d\n", abs(m/5 - 2) + abs(m%5 - 2));

    return 0;
}
