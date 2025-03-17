## Calculate area of Rectangle

A simple C program to calculate the area of a rectangle:

### Formula for Area of Rectangle:
The area of a rectangle is calculated using the formula:
\[
\text{Area} = \text{Length} \times \text{Width}
\]

### C Program to Calculate Area of Rectangle:

```c
#include <stdio.h>

int main() {
    float length, width, area;

    // Input length and width of the rectangle
    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);

    printf("Enter the width of the rectangle: ");
    scanf("%f", &width);

    // Calculate the area of the rectangle
    area = length * width;

    // Display the result
    printf("The area of the rectangle is: %.2f\n", area);

    return 0;
}
```

### Explanation:
1. **Input**: The program prompts the user to enter the length and width of the rectangle.
2. **Calculation**: It calculates the area using the formula `Area = Length * Width`.
3. **Output**: The area of the rectangle is then displayed with two decimal precision.

### Example:

If the user enters:
- Length: 5.0
- Width: 3.0

The output will be:
```
The area of the rectangle is: 15.00
```

This program uses `float` data type to handle decimal values, making it flexible for various input values.