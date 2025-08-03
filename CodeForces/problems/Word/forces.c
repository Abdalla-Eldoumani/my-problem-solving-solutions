#include <stdio.h>
#include <ctype.h>

int main() {
    char word[101];
    scanf("%s", word);
    
    int upper = 0;
    for (int i = 0; word[i]; i++) { 
        if (islower(word[i])) {
            upper--;
        } else if (isupper(word[i])) {
            upper++;
        }
    }
    
    for (int i = 0; word[i]; i++) {
        word[i] = upper > 0 ? toupper(word[i]) : tolower(word[i]);
    }
    
    printf("%s", word);

    return 0;
}