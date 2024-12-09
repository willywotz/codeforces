// https://codeforces.com/problemset/problem/282/A

#include <stdio.h>

int main() {
    int n, x = 0;
    char str[4];

    scanf("%d", &n);

    while (n--) {
        scanf("%s", str);
        if (str[1] == '+') {
            x++;
        } else {
            x--;
        }
    }

    printf("%d\n", x);

    return 0;
}
