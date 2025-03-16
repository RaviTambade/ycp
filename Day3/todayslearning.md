### Notes on Functions, Structures, Arrays, Conditional Statements, Looping, and Console Menu-Driven Application in C

---

#### **Functions in C**
1. **Definition:**
   - A **function** in C is a block of code that performs a specific task and can be called from other parts of the program.
   
2. **Syntax:**
   ```c
   return_type function_name(parameter1, parameter2, ...) {
       // Code to perform the task
       return value;  // If the return type is not void
   }
   ```

3. **Example of a Function:**
   ```c
   #include <stdio.h>

   // Function to add two numbers
   int add(int a, int b) {
       return a + b;
   }

   int main() {
       int result = add(5, 10);  // Calling the function
       printf("Sum: %d\n", result);  // Output: Sum: 15
       return 0;
   }
   ```

4. **Function Types:**
   - **With return type and parameters**: As shown in the example above.
   - **Without return type (void functions)**:
     ```c
     void display() {
         printf("Hello, World!\n");
     }
     ```

5. **Function Declaration (Prototype):**
   - A function prototype declares the function's return type and parameters before it is used in the code:
   ```c
   int add(int, int);
   ```

---

#### **Structures in C**

1. **Definition:**
   - A **structure** is a user-defined data type that allows grouping variables of different types under a single name.
   
2. **Syntax:**
   ```c
   struct StructureName {
       data_type member1;
       data_type member2;
       ...
   };
   ```

3. **Example of a Structure:**
   ```c
   #include <stdio.h>

   struct Person {
       char name[50];
       int age;
       float height;
   };

   int main() {
       struct Person p1 = {"John", 25, 5.9};  // Initializing a structure
       printf("Name: %s\nAge: %d\nHeight: %.2f\n", p1.name, p1.age, p1.height);
       return 0;
   }
   ```
   - In this example, a `Person` structure is created with `name`, `age`, and `height` as members.

4. **Accessing Structure Members:**
   - You can access structure members using the dot operator (`.`).
   ```c
   printf("%s is %d years old.\n", p1.name, p1.age);
   ```

5. **Pointer to Structure:**
   - When using a pointer to a structure, the arrow operator (`->`) is used:
   ```c
   struct Person *ptr;
   ptr = &p1;
   printf("%s is %d years old.\n", ptr->name, ptr->age);
   ```

---

#### **Arrays in C**

1. **Definition:**
   - An **array** is a collection of variables of the same type, stored in contiguous memory locations.

2. **Syntax:**
   ```c
   data_type array_name[size];
   ```

3. **Example of an Array:**
   ```c
   #include <stdio.h>

   int main() {
       int arr[5] = {1, 2, 3, 4, 5};  // Declaring and initializing an array
       for (int i = 0; i < 5; i++) {
           printf("%d ", arr[i]);  // Output: 1 2 3 4 5
       }
       return 0;
   }
   ```

4. **Array Access:**
   - Arrays are accessed using indices, starting from 0.
   ```c
   arr[0] = 10;  // Accessing and modifying an element
   ```

5. **Multidimensional Arrays:**
   - C allows creating arrays with more than one dimension:
   ```c
   int matrix[2][3] = {{1, 2, 3}, {4, 5, 6}};
   ```

---

#### **Conditional Statements in C**

1. **If-Else Statement:**
   - Used to execute a block of code based on a condition.
   ```c
   if (condition) {
       // code if true
   } else {
       // code if false
   }
   ```

2. **Example of If-Else:**
   ```c
   int num = 10;
   if (num > 0) {
       printf("Positive number\n");
   } else {
       printf("Non-positive number\n");
   }
   ```

3. **Else If:**
   - To check multiple conditions:
   ```c
   if (num > 0) {
       printf("Positive number\n");
   } else if (num == 0) {
       printf("Zero\n");
   } else {
       printf("Negative number\n");
   }
   ```

4. **Switch Case:**
   - A `switch` statement is used to execute one out of multiple options based on the value of a variable.
   ```c
   switch (variable) {
       case 1:
           // code
           break;
       case 2:
           // code
           break;
       default:
           // code
   }
   ```

---

#### **Looping in C**

1. **For Loop:**
   - A `for` loop is used for iterating over a sequence with a known number of iterations.
   ```c
   for (initialization; condition; increment/decrement) {
       // code
   }
   ```

2. **Example of For Loop:**
   ```c
   for (int i = 0; i < 5; i++) {
       printf("%d ", i);  // Output: 0 1 2 3 4
   }
   ```

3. **While Loop:**
   - A `while` loop runs as long as the condition is true.
   ```c
   while (condition) {
       // code
   }
   ```

4. **Example of While Loop:**
   ```c
   int i = 0;
   while (i < 5) {
       printf("%d ", i);  // Output: 0 1 2 3 4
       i++;
   }
   ```

5. **Do-While Loop:**
   - Similar to `while`, but ensures the loop executes at least once.
   ```c
   do {
       // code
   } while (condition);
   ```

---

#### **Console Menu-Driven Application in C**

1. **Menu-Driven Program:**
   - A console menu allows users to select different options. It is implemented using **`switch-case`** or **`if-else`** statements and loops to display the menu repeatedly.

2. **Example:**
   ```c
   #include <stdio.h>

   int add(int a, int b) {
       return a + b;
   }

   int subtract(int a, int b) {
       return a - b;
   }

   int main() {
       int choice, num1, num2;

       do {
           printf("\nMenu:\n");
           printf("1. Add\n");
           printf("2. Subtract\n");
           printf("3. Exit\n");
           printf("Enter your choice: ");
           scanf("%d", &choice);

           if (choice != 3) {
               printf("Enter two numbers: ");
               scanf("%d %d", &num1, &num2);
           }

           switch (choice) {
               case 1:
                   printf("Result: %d\n", add(num1, num2));
                   break;
               case 2:
                   printf("Result: %d\n", subtract(num1, num2));
                   break;
               case 3:
                   printf("Exiting...\n");
                   break;
               default:
                   printf("Invalid choice, try again!\n");
           }
       } while (choice != 3);  // Repeat the menu until the user chooses to exit

       return 0;
   }
   ```

3. **Explanation:**
   - The user is repeatedly prompted with a menu, where they can choose to perform addition, subtraction, or exit the program.
   - The program uses a `do-while` loop to keep the menu displayed until the user selects option 3 (Exit).
   - The `switch-case` statement is used to handle different options based on the user's input.

---

### Summary
- **Functions** are reusable blocks of code to perform specific tasks.
- **Structures** allow grouping of different data types into a single unit.
- **Arrays** hold multiple elements of the same data type.
- **Conditional Statements** (if, switch) control program flow based on conditions.
- **Loops** (for, while, do-while) repeat code a specific number of times or until a condition is met.
- **Menu-Driven Application** uses loops and conditionals to provide the user with options to perform actions like calculations or exit.

