// searching element inside array...

#include <stdio.h>

int main() {
    int n, num, found = 0;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter number to search: ");
    scanf("%d", &num);

    for (int i = 0; i < n; i++) {
        if (arr[i] == num) {
            printf("Number found at position %d\n", i + 1);
            found = 1;
            break;
        }
    }

    if (!found)
        printf("Number not found in array.\n");

    return 0;
}
