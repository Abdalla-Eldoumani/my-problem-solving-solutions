#include <stdio.h>

int main() {
    int t; scanf("%d", &t);
    
    for (int i = 0; i < t; i++){
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);
        
        if ((b < c && b > a) || (b > c && b < a)){
            printf("%d\n", b);
        } else if ((c < b && c > a) || (c > b && c < a)){
            printf("%d\n", c);
        } else if ((a < b && a > c) || (a > b && a < c)){
            printf("%d\n", a);
        }
    }
    return 0;
}