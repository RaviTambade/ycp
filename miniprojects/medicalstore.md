### **Problem Definition for Medical Store Management System Using C**

A **Medical Store Management System (MSMS)** is a software application designed to help manage the operations of a medical store or pharmacy. This system helps manage inventory, track medications, process sales transactions, and maintain a record of medicines and their details. The system is intended for use by pharmacy staff to efficiently handle the purchase, sale, and stock management of medicines.

This problem definition focuses on building a **Medical Store Management System using C** that can track medicines, their quantities, prices, and sales transactions.

---

### **Problem Objective:**

To design and implement a **Medical Store Management System in C** that allows the following functionalities:
1. **Add new medicines** to the inventory.
2. **View all available medicines** and their details (name, price, quantity).
3. **Search for medicines** by name or category.
4. **Sell medicines** and update inventory accordingly.
5. **View total sales** and track earnings.
6. **Exit** the system.

---

### **System Features and Requirements:**

1. **Medicine Information:**
   - Each medicine will have the following information:
     - **Medicine ID**: A unique identifier for each medicine.
     - **Name**: The name of the medicine.
     - **Category**: The category/type of the medicine (e.g., Painkiller, Antibiotic, Vitamin).
     - **Price**: The selling price of the medicine.
     - **Quantity**: The quantity of the medicine available in the store.

2. **User Input:**
   - Users can input the necessary details to add new medicines to the inventory, sell medicines, and perform other operations.
   - Users can search for medicines by name or category to view details or initiate a sale.

3. **Operations:**
   - **Add Medicine**: Add new medicines to the inventory with details like name, category, price, and quantity.
   - **View Medicines**: View all available medicines along with their details (name, price, quantity, category).
   - **Search Medicine**: Search for a medicine by its name or category.
   - **Sell Medicine**: Sell a medicine, which updates the inventory based on the quantity sold.
   - **View Total Sales**: Display the total sales made during the operation of the system.
   - **Exit**: Exit the system.

4. **Data Storage:**
   - The medicines will be stored in an array of structures.
   - Each structure will represent a medicine, and the system will support a predefined maximum number of medicines (`MAX_MEDICINES`).
   - Sales will be tracked in a simple way (e.g., total earnings).

5. **User Interface:**
   - The system will operate through a **command-line interface (CLI)** with text-based menus for the users to interact with.

---

### **Data Structures:**

1. **Medicine Structure:**
   Each medicine is represented by a structure containing information about the medicine, such as the medicine ID, name, category, price, and quantity.

   ```c
   #define MAX_MEDICINES 100

   struct Medicine {
       int medID;             // Unique identifier for the medicine
       char name[100];        // Name of the medicine
       char category[50];     // Category of the medicine (e.g., Painkiller)
       float price;           // Price of the medicine
       int quantity;          // Available quantity of the medicine
   };

   struct Medicine inventory[MAX_MEDICINES];
   int totalMedicines = 0;  // Total number of medicines in the inventory
   ```

2. **Sales Tracking:**
   The system will track total sales made during the operation.

   ```c
   float totalSales = 0.0;  // Total earnings from sales
   ```

---

### **Functional Requirements:**

1. **Add Medicine:**
   - The user can add new medicines to the inventory by providing the medicine's ID, name, category, price, and quantity.
   - The system will ensure that the medicine ID is unique and that the quantity is valid.
   - If the inventory is full (i.e., `MAX_MEDICINES`), the system will notify the user.

2. **View All Medicines:**
   - The user can view a list of all medicines available in the inventory along with their details (medicine ID, name, category, price, and quantity).

3. **Search Medicine:**
   - The user can search for a medicine by its name or category. If a matching medicine is found, the system will display its details (medicine ID, name, category, price, and quantity).

4. **Sell Medicine:**
   - The user can sell a medicine by specifying the medicine's ID and the quantity to sell.
   - The system will check if there is enough stock available to fulfill the sale.
   - If the sale is successful, the system will update the inventory (decrease the quantity) and add the total sale amount to `totalSales`.

5. **View Total Sales:**
   - The user can view the total earnings (sales amount) generated from all transactions during the program's execution.

6. **Exit:**
   - The user can choose to exit the program, terminating the session.

---

### **Constraints and Assumptions:**

1. **Fixed Capacity:**
   - The system can store a maximum of `MAX_MEDICINES` medicines. If the number of medicines exceeds this limit, the system will notify the user.

2. **No Persistent Data Storage:**
   - The system does not save data permanently (e.g., to a file). All data will be lost when the program terminates. This could be extended to file handling in the future to persist data between sessions.

3. **Basic Input Validation:**
   - The system will perform basic input validation, ensuring that the entered values are appropriate (e.g., checking that the quantity of a medicine is a positive integer).

4. **Simple User Interface:**
   - The system will operate through a text-based command-line interface (CLI), where users can select options from a menu.


### **Conclusion:**

The **Medical Store Management System** designed in C efficiently manages the inventory of medicines, processes sales, and tracks total earnings. With basic features like adding new medicines, viewing medicines, selling medicines, and viewing total sales, this system can be extended in the future with additional functionalities such as medicine expiration tracking, supplier information, and a persistent database for long-term storage.