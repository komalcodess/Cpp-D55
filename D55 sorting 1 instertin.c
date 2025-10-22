#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    float arr[n];
    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%f", &arr[i]);
    }

    for (int i=0; i<n-1; i++) {
        float max = arr[i];
        int pos=i;
        for (int j=i+1; j<n; j++) {
            if (arr[j]>max) {
                max=arr[j];
                pos=j;
            }
        }
        float temp=arr[i];
        arr[i]=arr[pos];
        arr[pos]=temp;
    }

    printf("Sorted array in descending order: ");
    for (int i=0; i<n;i++) {
        printf("%.2f ", arr[i]);
    }
    printf("\n");

}
