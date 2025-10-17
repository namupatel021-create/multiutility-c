#include <stdio.h>

int main() {
    char ch;

    printf("Output: ");
    for (ch = 'a'; ch <= 'z'; ch = ch + 4) {
        printf("%c ", ch);
    }

    printf("\n");
    return 0;
}
