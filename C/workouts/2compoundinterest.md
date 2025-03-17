## Calculate compound interest 
 
A C program to calculate compound interest:

### Formula for Compound Interest:
\[ A = P \left(1 + \frac{r}{100}\right)^t \]
Where:
- \( A \) is the amount (principal + interest)
- \( P \) is the principal amount (initial investment)
- \( r \) is the rate of interest per period (in percentage)
- \( t \) is the time the money is invested or borrowed for, in years

The compound interest (CI) is:
\[ CI = A - P \]

### C Program to Calculate Compound Interest:

```c
#include <stdio.h>
#include <math.h>  // For pow() function

void calculateCompoundInterest() {
    double principal, rate, time, amount, compoundInterest;

    // User input for principal, rate, and time
    printf("Enter the principal amount: ");
    scanf("%lf", &principal);
    printf("Enter the rate of interest (in %%): ");
    scanf("%lf", &rate);
    printf("Enter the time (in years): ");
    scanf("%lf", &time);

    // Compound Interest formula
    amount = principal * pow(1 + rate / 100, time);
    compoundInterest = amount - principal;

    // Output the results
    printf("Compound Interest: %.2lf\n", compoundInterest);
    printf("Amount after %.2lf years: %.2lf\n", time, amount);
}

int main() {
    calculateCompoundInterest();
    return 0;
}
```

### Explanation:
1. **User Input**: The program asks for the principal amount, rate of interest, and the time period (in years).
2. **Compound Interest Calculation**: The formula is applied to calculate the amount and then subtract the principal to get the compound interest.
3. **Math Library**: The `pow()` function from the `math.h` library is used to calculate the exponentiation required in the compound interest formula.
4. **Output**: The program displays the compound interest and the total amount after the specified time period.

### Example:
If the user enters:
- Principal amount: 1000
- Rate of interest: 5%
- Time: 2 years

The program will output:
```
Compound Interest: 102.50
Amount after 2.00 years: 1102.50
```