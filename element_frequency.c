// frequency of elements in array...

#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int mC = 0, mF = arr[0];

    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j])
                count++;
        }

        if (count > mC) {
            mC = count;
            mF = arr[i];
        }
    }

    printf("Most frequent element: %d (appears %d times)\n", mF, mC);

    return 0;
}
