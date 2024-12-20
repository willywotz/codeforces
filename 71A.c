// https://codeforces.com/problemset/problem/71/A

#include <stdio.h>
#include <strings.h>

int main() {
    int lines, length;
    scanf("%d", &lines);
    char str[101];

    while (lines--) {
        scanf("%s", &str);
        length = strlen(str);
        if (length <= 10) {
            printf("%s\n", str);
        } else {
            printf("%c%d%c\n", str[0], length - 2, str[length - 1]);
        }
    }

    return 0;
}
