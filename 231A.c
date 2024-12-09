// https://codeforces.com/problemset/problem/231/A

#include <stdio.h>

int main() {
    int n, tmp = 0, out = 0;
    scanf("%d", &n);

    char c;

    while (n-- != -1) {
        while ((c = getchar()) != '\n') {
            if (c == '1') tmp++;
        }
        if (tmp >= 2) out++;
        tmp = 0;
    }

    printf("%d\n", out);
    return 0;
}
