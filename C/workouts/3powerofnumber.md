# Calculate  the power of a number

A simple C program to calculate the power of a number:

### Formula for Power:
The formula for calculating the power of a number \( a \) raised to the power \( b \) is:
\[ a^b = a \times a \times a \times ... \text{(b times)} \]

### C Program to Calculate Power of a Number:

```c
#include <stdio.h>

// Function to calculate power of a number
double power(double base, int exponent) {
    double result = 1.0;
    
    // Loop to calculate base^exponent
    for(int i = 1; i <= exponent; i++) {
        result *= base;
    }
    
    return result;
}

int main() {
    double base;
    int exponent;
    
    // Taking input from the user
    printf("Enter the base: ");
    scanf("%lf", &base);
    
    printf("Enter the exponent: ");
    scanf("%d", &exponent);
    
    // Function call to calculate power
    double result = power(base, exponent);
    
    // Displaying the result
    printf("%.2lf raised to the power of %d is: %.2lf\n", base, exponent, result);
    
    return 0;
}
```

### Explanation:
1. **Function `power()`**: This function takes two arguments: the base (a floating-point number) and the exponent (an integer). It calculates the result by multiplying the base by itself for the given number of times (exponent).
   
2. **Input**: The program takes the base and exponent from the user.

3. **Loop**: The loop inside the `power()` function multiplies the base repeatedly for the number of times specified by the exponent.

4. **Output**: The program then prints the result of the base raised to the power of the exponent.

### Example:
If the user enters:
- Base: 2
- Exponent: 3

The program will output:
```
2.00 raised to the power of 3 is: 8.00
```

### Alternative (Using `pow()` from `math.h`):
If you want to use the built-in power function from the math library for more precision and flexibility, you can use `pow()` function like this:

```c
#include <stdio.h>
#include <math.h>  // Include the math library

int main() {
    double base;
    int exponent;
    
    // Taking input from the user
    printf("Enter the base: ");
    scanf("%lf", &base);
    
    printf("Enter the exponent: ");
    scanf("%d", &exponent);
    
    // Using the built-in pow function
    double result = pow(base, exponent);
    
    // Displaying the result
    printf("%.2lf raised to the power of %d is: %.2lf\n", base, exponent, result);
    
    return 0;
}
```

The output would be the same, and using `pow()` is efficient for handling larger numbers and fractional powers.