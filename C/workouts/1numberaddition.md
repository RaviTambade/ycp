##  Add two numbers/binary numbers/characters
A C program that can add two numbers, binary numbers, or characters based on the user's choice:

```c
#include <stdio.h>
#include <stdlib.h>

void add_numbers() {
    int num1, num2, sum;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    sum = num1 + num2;
    printf("Sum of numbers: %d\n", sum);
}

void add_binary_numbers() {
    int a, b, result, carry = 0;
    printf("Enter two binary numbers (0s and 1s): \n");
    printf("Enter first binary number: ");
    scanf("%d", &a);
    printf("Enter second binary number: ");
    scanf("%d", &b);

    // Perform binary addition
    result = (a ^ b) ^ carry;
    carry = (a & b) | (carry & (a ^ b));

    printf("Binary sum: %d\n", result);
}

void add_characters() {
    char ch1, ch2;
    int sum;
    printf("Enter two characters: ");
    scanf(" %c %c", &ch1, &ch2);  // Add a space before %c to handle previous input correctly.
    sum = ch1 + ch2;
    printf("Sum of character values (ASCII): %d\n", sum);
}

int main() {
    int choice;

    printf("Choose an operation:\n");
    printf("1. Add two numbers\n");
    printf("2. Add two binary numbers\n");
    printf("3. Add two characters\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            add_numbers();
            break;
        case 2:
            add_binary_numbers();
            break;
        case 3:
            add_characters();
            break;
        default:
            printf("Invalid choice!\n");
            break;
    }

    return 0;
}
```

### Explanation:
1. **Add Two Numbers**: This function adds two integers input by the user and prints the sum.
2. **Add Two Binary Numbers**: This function asks the user for two binary numbers and adds them. The addition is done using the XOR and AND operations for binary addition.
3. **Add Two Characters**: This function takes two characters as input, adds their ASCII values, and prints the sum.

### How It Works:
1. The user selects the operation to perform by choosing the corresponding option.
2. Depending on the choice, the program executes the respective function to add numbers, binary numbers, or characters.
