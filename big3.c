#include <stdio.h>

biggest3() {
    int num1, num2, num3;
    int max;

    // Prompt user to input three numbers
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Determine the maximum number
    if (num1 > num2 && num1 > num3) {
        max = num1;
    } else if (num2 > num1 && num2 > num3) {
        max = num2;
    } else {
        max = num3;
    }

    // Print the maximum number
    printf("The biggest number is: %d\n", max);

   // return 0;
}

