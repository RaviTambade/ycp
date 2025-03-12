### **Problem Definition for Task Management System Using C**

The task management system is an application designed to help users manage, organize, and track various tasks efficiently. Users should be able to perform basic operations like adding, deleting, marking tasks as completed, and viewing tasks in the system. This system will be implemented using **C programming** to give users the flexibility and control over their task list, and provide a simple but functional command-line interface.

---

### **Problem Objective:**

To develop a Task Management System in C that allows users to:
1. **Add tasks** with titles and descriptions.
2. **Mark tasks as completed**.
3. **Delete tasks** that are no longer required.
4. **View all tasks**, displaying their status (pending/completed).
5. **Exit the application** when finished.

---

### **System Features and Requirements:**

1. **User Input:**
   - The system should accept user input through the command line interface.
   - Each task can have a **title** and **description**. The description is optional.
   - The task has a **status**: "Pending" or "Completed".
   
2. **Task Operations:**
   - **Add Task**: The user should be able to add a new task with a title and description (optional).
   - **View All Tasks**: The user should be able to view all tasks, listing each task with its status (pending or completed).
   - **Mark Task as Completed**: The user should be able to mark a specific task as "Completed".
   - **Delete Task**: The user should be able to delete a task from the list.
   - **Exit**: The user should be able to exit the system gracefully.

3. **Task Storage:**
   - Tasks should be stored in an array or dynamic structure (like an array of structs) within the program's memory.
   - The task list should support **dynamic** resizing if needed (up to a limit).

4. **User Interface:**
   - The system will be operated via the console with a text-based menu.
   - The menu should provide clear options for each feature.

---

### **Data Structures:**

- **Task Structure**: A structure to represent a task. This will contain the title, description (optional), and status (completed or pending).
  
  Example of the struct:
  ```c
  struct Task {
      char title[100];     // Title of the task
      char description[200];  // Description (optional)
      int completed;       // Status (0 = Pending, 1 = Completed)
  };
  ```

- **Task Array**: An array of `struct Task` to hold the tasks.
  
  Example:
  ```c
  #define MAX_TASKS 100   // Maximum number of tasks
  struct Task tasks[MAX_TASKS];
  int taskCount = 0;      // Counter to keep track of the number of tasks
  ```

---

### **Functional Requirements:**

1. **Add a Task:**
   - Prompt the user to enter a task title and an optional description.
   - Add the task to the `tasks` array and increment `taskCount`.

2. **Mark a Task as Completed:**
   - Display all tasks to the user with their indices.
   - Prompt the user to choose a task to mark as completed.
   - Update the status of the chosen task from "Pending" to "Completed".

3. **Delete a Task:**
   - Display all tasks with their indices.
   - Prompt the user to choose a task to delete.
   - Shift remaining tasks in the array to fill the gap created by the deleted task and decrement `taskCount`.

4. **View All Tasks:**
   - Display all tasks with their title, description, and status (Pending/Completed).

5. **Exit the Application:**
   - The program should exit when the user chooses to do so, ensuring the user doesn’t lose any data.

---

### **Constraints and Assumptions:**

1. **Task List Capacity**: 
   - Initially, the system will support a fixed number of tasks (`MAX_TASKS`). The user will be notified if the task list reaches its capacity.
   - This number can be adjusted based on requirements, or dynamic memory allocation could be used to expand the array.

2. **No Persistence**:
   - The application will **not** save tasks permanently to disk. Once the program is closed, all tasks will be lost unless modified to support file saving in future extensions.

3. **User Input Validation**:
   - Basic validation should be performed to ensure that the user does not enter invalid input (e.g., marking a non-existent task as completed).

4. **Menu Options**:
   - The system should provide a main menu with the following options:
     - **1. Add Task**
     - **2. View All Tasks**
     - **3. Mark Task as Completed**
     - **4. Delete Task**
     - **5. Exit**



### **Conclusion:**

This Task Management System allows users to manage tasks by adding, viewing, marking as completed, and deleting tasks. It is built using simple C constructs like arrays, structures, and functions, making it a great exercise in learning C programming and understanding how to manage data in a program.