# E-Commerce Order Management System

## Overview
This project is an **E-Commerce Order Management System** that integrates multiple **Data Structures and Algorithms (DSA)** techniques. It simulates an online shopping platform where users can log in, browse products, add items to the cart, place orders, and track deliveries efficiently.

## Features & Data Structures Used

### 1. **User Authentication (Trie + Hash Table)**
   - Stores user credentials using a **Trie** for efficient search and login verification.
   - Uses a **hash table** for quick lookup of registered users.

### 2. **Product Management (Binary Search Tree - BST)**
   - Products are stored in a **BST**, allowing efficient insertion, search, and retrieval based on price.
   - Supports **in-order traversal** to display products in ascending order of price.

### 3. **Shopping Cart (Doubly Linked List)**
   - Implements a **doubly linked list** to manage cart items.
   - Allows adding and removing items efficiently.
   - Supports traversal in both forward and backward directions.

### 4. **Order Processing (Queue - FIFO)**
   - Uses a **queue** to manage customer orders.
   - Orders are processed in a **First-In-First-Out (FIFO)** manner.

### 5. **Delivery System (Graph + Dijkstra’s Algorithm)**
   - Uses a **graph** to represent cities and delivery routes.
   - Implements **Dijkstra’s Algorithm** to find the shortest delivery path.

## Project Structure
```
E-Commerce-Order-Management/
│── src/
│   ├── authentication.cpp  # User Authentication (Trie + Hash Table)
│   ├── product_management.cpp  # Product Management (BST)
│   ├── shopping_cart.cpp  # Shopping Cart (Doubly Linked List)
│   ├── order_processing.cpp  # Order Processing (Queue)
│   ├── delivery_system.cpp  # Delivery System (Graph + Dijkstra)
│   ├── main.cpp  # Main File (Integrates All Modules)
│── include/
│   ├── authentication.h
│   ├── product_management.h
│   ├── shopping_cart.h
│   ├── order_processing.h
│   ├── delivery_system.h
│── README.md  # Project Documentation
│── Makefile  # Compile all files
```

## How to Run the Project
1. **Clone the Repository**
   ```sh
   git clone https://github.com/your-username/E-Commerce-Order-Management.git
   cd E-Commerce-Order-Management
   ```
2. **Compile the Code**
   ```sh
   make
   ```
3. **Run the Program**
   ```sh
   ./main
   ```

## Future Enhancements
- Implement a **database** to store user data and orders permanently.
- Add a **graphical user interface (GUI)** for better user experience.
- Introduce **payment gateway integration** for complete e-commerce functionality.

## Contributors
- **Shailesh Kumar Gupta**
- Open for contributions! Feel free to fork and submit pull requests.

## License
This project is open-source and available under the **MIT License**.
