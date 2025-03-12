### **Problem Definition for Order Processing System Using C Programming**

An **Order Processing System** is a software application that automates the process of handling orders in various business environments. It involves managing customer orders, processing those orders, maintaining product inventories, and ensuring smooth tracking of order statuses. The system allows the business to manage the flow of orders from customers, including their details, payment status, and shipping status.

In this problem, we are building a **simple Order Processing System using C programming**, which will track customer orders, manage product inventories, and process order statuses, allowing users to add products, place orders, update order status, and view details of orders.

---

### **Problem Objective:**

To design and implement an **Order Processing System in C** that allows the following functionalities:
1. **Add new products** to the product inventory.
2. **View product details** (name, price, and available stock).
3. **Create and manage customer orders**.
4. **Process orders** by updating the order status and inventory.
5. **View all orders** and their statuses.
6. **Exit** the system.

---

### **System Features and Requirements:**

1. **Product Information:**
   - Each product will have the following information:
     - **Product ID**: A unique identifier for the product.
     - **Name**: The name of the product.
     - **Price**: The price of the product.
     - **Quantity**: The available stock of the product.

2. **Order Information:**
   - Each order will have the following information:
     - **Order ID**: A unique identifier for the order.
     - **Customer Name**: The name of the customer who placed the order.
     - **Product ID(s)**: The product(s) that are part of the order.
     - **Quantity Ordered**: The quantity of each product ordered.
     - **Total Amount**: The total cost of the order (calculated by multiplying the product price by the quantity).
     - **Order Status**: The status of the order (e.g., "Pending", "Processed", "Shipped").

3. **User Operations:**
   - **Add Product**: Adds new products to the inventory.
   - **View Products**: Displays all products with their details.
   - **Create Order**: Allows a user to place a new order, selecting products and quantities.
   - **Process Order**: Updates the order status and adjusts inventory.
   - **View Orders**: Displays all orders with their statuses and details.
   - **Exit**: Exits the program.

4. **Data Storage:**
   - Products will be stored in an array of structures.
   - Orders will also be stored in an array of structures.
   - The system will support a predefined maximum number of products and orders (`MAX_PRODUCTS`, `MAX_ORDERS`).

5. **User Interface:**
   - The system will operate through a **command-line interface (CLI)** with text-based menus for the user to interact with the system.

---

### **Data Structures:**

1. **Product Structure:**
   Each product is represented by a structure containing information about the product, such as the product ID, name, price, and quantity.

   ```c
   #define MAX_PRODUCTS 100

   struct Product {
       int productID;        // Unique identifier for the product
       char name[100];       // Name of the product
       float price;          // Price of the product
       int quantity;         // Available quantity of the product
   };

   struct Product inventory[MAX_PRODUCTS];
   int totalProducts = 0;  // Total number of products in the inventory
   ```

2. **Order Structure:**
   Each order is represented by a structure containing information about the customer, the ordered product(s), and the order status.

   ```c
   #define MAX_ORDERS 100

   struct Order {
       int orderID;          // Unique identifier for the order
       char customerName[100]; // Customer's name
       int productID;        // ID of the product ordered
       int quantity;         // Quantity of the product ordered
       float totalAmount;    // Total amount for the order
       char orderStatus[20]; // Status of the order (Pending/Processed/Shipped)
   };

   struct Order orders[MAX_ORDERS];
   int totalOrders = 0;  // Total number of orders
   ```

---

### **Functional Requirements:**

1. **Add Product:**
   - The user can add new products to the inventory, providing the product ID, name, price, and available quantity.
   - The system should check that the product ID is unique.

2. **View Products:**
   - The user can view a list of all products in the inventory, along with their product ID, name, price, and available stock.

3. **Create Order:**
   - The user can place a new order by selecting a product and specifying the quantity.
   - The system should check that the quantity ordered does not exceed the available stock.
   - The total amount of the order is calculated based on the product price and quantity ordered.

4. **Process Order:**
   - The user can process an order by updating its status from "Pending" to "Processed" or "Shipped".
   - The system should adjust the inventory by reducing the quantity of the ordered products accordingly.
   - If an order is processed, its status should be updated, and the inventory should be updated to reflect the sale.

5. **View Orders:**
   - The user can view all orders, including the order ID, customer name, ordered product(s), quantity, total amount, and order status.

6. **Exit:**
   - The program can be exited by the user.

---

### **Constraints and Assumptions:**

1. **Fixed Capacity:**
   - The system can store a maximum of `MAX_PRODUCTS` products and `MAX_ORDERS` orders. If the limit is reached, the user will be notified.

2. **No Persistent Data Storage:**
   - The system does not save data to files. All data is stored in memory, and it will be lost once the program terminates. File handling can be added in future versions for data persistence.

3. **Basic Input Validation:**
   - The system will ensure that the entered product ID is unique and that orders are not placed for quantities greater than the available stock.

4. **Simple User Interface:**
   - The system will use a text-based command-line interface (CLI), where users can select options from a menu.

---

### **Sample Menu Options:**

```
Order Processing System
=======================
1. Add Product
2. View Products
3. Create Order
4. Process Order
5. View Orders
6. Exit
Enter your choice (1-6):
```



### **Conclusion:**

The **Order Processing System** designed in C automates the process of managing products, handling customer orders, updating inventory, and tracking the status of each order. This system provides essential features like adding products, viewing products, creating and processing orders, and viewing order details. Future enhancements can include integrating payment processing, order shipping, and data persistence through file handling.