// https://codeforces.com/problemset/problem/4/A

#include <stdio.h>

int main() {
    int weight;
    scanf("%d", &weight);

    if (weight > 2 && (weight & 1) == 0) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
