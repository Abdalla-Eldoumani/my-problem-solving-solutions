#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

bool is_reverse(char *s1, char *s2);

int main() {
    char s1[101];
    char s2[101];
    
    scanf("%s", s1);
    scanf("%s", s2);
    
    if (is_reverse(s1, s2))
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}

bool is_reverse(char *s1, char *s2){
    int len1 = strlen(s1);
    int len2 = strlen(s2);
    
    if (len1 != len2)
        return false;
        
    for (int i = 0; i < len1; i++){
        if (s1[i] != s2[len1 - 1 - i])
            return false;
    }
    
    return true;
}