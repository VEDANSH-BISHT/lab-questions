// copying array elemnt to another one...


#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr1[n], arr2[n];

    printf("Enter %d elements for first array: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr1[i]);

    for (int i = 0; i < n; i++)
        arr2[i] = arr1[i]; 

    printf("Elements copied to second array:\n");
    for (int i = 0; i < n; i++)
        printf("%d ", arr2[i]);

    return 0;
}
