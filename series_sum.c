//Sum of series 1 + 1/2 + 1/3 + 1/4 +......n

#include <stdio.h>

int main() {
    int n;
    double sum = 0.0; 

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        sum= sum + 1.0 / i; 
    }

    printf("Sum of series 1 + 1/2 + 1/3 + ... + 1/%d = %.4f\n", n, sum);
;                                                                                         ;
    return 0;
}
