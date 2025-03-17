 ## Swap two numbers

A simple C program to swap two numbers:

### C Program to Swap Two Numbers:

```c
#include <stdio.h>

void swap(int *a, int *b) {
    int temp;
    // Swap the values of a and b
    temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int num1, num2;
    
    // Input two numbers from the user
    printf("Enter the first number: ");
    scanf("%d", &num1);
    
    printf("Enter the second number: ");
    scanf("%d", &num2);
    
    // Displaying the numbers before swapping
    printf("Before swapping: num1 = %d, num2 = %d\n", num1, num2);
    
    // Call the swap function
    swap(&num1, &num2);
    
    // Displaying the numbers after swapping
    printf("After swapping: num1 = %d, num2 = %d\n", num1, num2);
    
    return 0;
}
```

### Explanation:
1. **Function `swap()`**: This function swaps the values of two numbers using pointers. It takes the memory addresses of the variables (`int *a` and `int *b`) and swaps their values using a temporary variable `temp`.
   
2. **Input**: The program asks the user to enter two numbers.
   
3. **Before Swapping**: It first displays the values of `num1` and `num2` before the swap.
   
4. **Swapping Process**: The `swap()` function is called with the addresses of `num1` and `num2`, and it swaps their values.
   
5. **After Swapping**: The program then displays the new values of `num1` and `num2` after the swap.

### Example:

If the user enters:
- First number: 5
- Second number: 10

The output will be:

```
Before swapping: num1 = 5, num2 = 10
After swapping: num1 = 10, num2 = 5
```

### Alternative Methods:
You can also swap the numbers using other methods, like using arithmetic operations or bitwise XOR, but using a temporary variable is the most straightforward and readable approach.