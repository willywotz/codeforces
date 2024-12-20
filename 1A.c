// https://codeforces.com/problemset/problem/1/A

#include <stdio.h>

int main() {
    int m, n, a;
    scanf("%d %d %d", &m, &n, &a);
    printf("%lld\n", (long long int)(m/a + (m%a!=0)) * (long long int)(n/a + (n%a!=0)));

    return 0;
}
