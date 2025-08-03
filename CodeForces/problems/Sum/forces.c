#include <stdio.h>

int main() {
    int t, a, b, c;
    scanf("%d", &t);
    
    while (t--) {
        scanf("%d %d %d", &a, &b, &c);
        printf("%s\n", (a + b) == c || (a + c) == b || (b + c) == a ? "YES" : "NO");
    }
    
    return 0;
}