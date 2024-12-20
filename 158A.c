// https://codeforces.com/problemset/problem/158/A

#include <stdio.h>

int main() {
    int n, k, out = 0;
    scanf("%d %d", &n, &k);
    int score[50];
    for (int i = 0; i < n; i++) scanf("%d", &score[i]);
    for (int i = 0; i < n; i++) if (score[i] != 0 && score[k - 1] <= score[i]) { out++; } else { break; }
    printf("%d\n", out);

    return 0;
}
