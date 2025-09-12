#include <stdio.h>

int main() {
    char str[100];
    int n, size[20], i, j, k = 0;

    printf("Enter string: ");
    scanf(" %[^\n]", str);   // read string with spaces

    printf("Enter number of frames: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("Size of frame %d: ", i);
        scanf("%d", &size[i]);
    }

    for(i = 0; i < n; i++) {
        printf("\nFrame %d: ", i);
        for(j = 0; j < size[i] && str[k] != '\0'; j++, k++)
            printf("%c", str[k]);
    }
    return 0;
}
