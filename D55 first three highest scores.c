#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);

    float scores[n];
    for (int i = 0; i < n; i++) {
        printf("Enter the score of student %d: ", i+1);
        scanf("%f", &scores[i]);
    }

    float first =-1, second = -1, third = -1;

    for (int i=0; i < n; i++) {
        if (scores[i] > first) {
            third = second;
            second = first;
            first = scores[i];
        } else if (scores[i] > second) {
            third = second;
            second = scores[i];
        } else if (scores[i] > third) {
            third = scores[i];
        }
    }

    printf("\n1st Highest: %.2f\n", first);
    printf("2nd Highest: %.2f\n", second);
    printf("3rd Highest: %.2f\n", third);

    return 0;
}
