## String operations Implementations (without  using string.h)

A C program that implements various string operations (comparison, concatenation, copying, and length calculation) using pointers, without using the standard `string.h` library functions.

### C Program for String Operations Using Pointers:

```c
#include <stdio.h>

// Function to compare two strings (return 0 if equal, non-zero if not)
int my_strcmp(const char *str1, const char *str2) {
    while (*str1 && (*str1 == *str2)) {
        str1++;
        str2++;
    }
    return *str1 - *str2;
}

// Function to concatenate two strings
void my_strcat(char *dest, const char *src) {
    while (*dest) {
        dest++;  // Move to the end of the first string
    }
    while (*src) {
        *dest = *src;  // Copy each character from src to dest
        dest++;
        src++;
    }
    *dest = '\0';  // Null-terminate the resulting string
}

// Function to copy one string to another
void my_strcpy(char *dest, const char *src) {
    while (*src) {
        *dest = *src;  // Copy each character
        dest++;
        src++;
    }
    *dest = '\0';  // Null-terminate the destination string
}

// Function to calculate the length of a string
int my_strlen(const char *str) {
    int length = 0;
    while (*str) {
        length++;
        str++;
    }
    return length;
}

int main() {
    char str1[100], str2[100];
    char result[200];  // For storing the concatenated result

    // Input strings from the user
    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    // Removing trailing newline from fgets input (if any)
    if (str1[my_strlen(str1) - 1] == '\n') str1[my_strlen(str1) - 1] = '\0';
    if (str2[my_strlen(str2) - 1] == '\n') str2[my_strlen(str2) - 1] = '\0';

    // String Comparison
    int cmp_result = my_strcmp(str1, str2);
    if (cmp_result == 0) {
        printf("The strings are equal.\n");
    } else {
        printf("The strings are not equal.\n");
    }

    // String Concatenation
    my_strcpy(result, str1);  // Copy first string to result
    my_strcat(result, str2);  // Concatenate second string to result
    printf("Concatenated string: %s\n", result);

    // String Copy
    char copy_result[100];
    my_strcpy(copy_result, str1);
    printf("Copied string: %s\n", copy_result);

    // String Length
    printf("Length of first string: %d\n", my_strlen(str1));
    printf("Length of second string: %d\n", my_strlen(str2));

    return 0;
}
```

### Explanation of Functions:

1. **`my_strcmp`**: 
   - This function compares two strings. It iterates through each character of both strings and compares them. If they are equal, it moves to the next character. If it finds a mismatch, it returns the difference between the characters, which indicates the result of the comparison.
   - Returns `0` if the strings are equal, and a non-zero value if they are different.

2. **`my_strcat`**:
   - This function concatenates two strings. It first moves to the end of the destination string and then appends the characters of the source string to the destination.
   - It null-terminates the concatenated result after appending all characters.

3. **`my_strcpy`**:
   - This function copies one string into another. It simply iterates through the source string and copies each character to the destination string until it encounters the null-terminator `\0`, which it also copies to null-terminate the destination string.

4. **`my_strlen`**:
   - This function calculates the length of a string by counting the characters until it reaches the null-terminator `\0`.

### Example Output:

```
Enter first string: Hello
Enter second string: World
The strings are not equal.
Concatenated string: HelloWorld
Copied string: Hello
Length of first string: 5
Length of second string: 5
```

### Key Points:
- **Pointer Usage**: All functions work with pointers to manipulate the strings directly. Pointers allow efficient traversal and modification of the string data.
- **No `string.h`**: The program does not use any standard string handling functions like `strcmp`, `strcat`, `strcpy`, or `strlen` from `string.h`. Instead, it uses custom implementations to perform these operations manually.

This program should meet the requirements of working with strings using pointers while implementing fundamental string operations!