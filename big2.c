
#include <stdio.h>

biggest2() {
    int num1, num2;
    int max;

    // Prompt user to input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Determine the maximum number
    if (num1 > num2) {
        max = num1;
    } else {
        max = num2;
    }

    // Print the maximum number
    printf("The biggest number is: %d\n", max);

   // return 0;
}
