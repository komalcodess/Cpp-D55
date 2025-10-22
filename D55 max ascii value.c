#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of characters: ");
    scanf("%d", &n);

    char arr[n];

    printf("Enter the characters: ");
    for (int i=0; i<n; i++) {
        scanf(" %c", &arr[i]);
    }
    char maxChar =arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > maxChar) {
            maxChar = arr[i];
        }
    }

    printf("Character with maximum ASCII value: %c with ascii value %d\n", maxChar, maxChar);

}
