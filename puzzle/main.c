#include <stdio.h>

int maxm(int a, int b, int c, int d);

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = maxm(a, b, c, d);
    printf("%d", ans);

    return 0;
}
int maxm(int a, int b, int c, int d) {
    return ((a>b&&a>c&&a>d)?a:(b>c&&b>a&&b>d)?b:(c>d&&c>a&&c>b)?c:d);


}
