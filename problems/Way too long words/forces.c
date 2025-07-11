#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++){
        char word[101];
        scanf("%s", word);

        int length = 0;
        for (int j = 0; word[j] != '\0'; j++){
            length++;
        }

        if (length > 10){
            printf("%c%d%c\n", word[0], length - 2, word[length - 1]);
        } else {
            printf("%s\n", word);
        }
    }

    return 0;
}