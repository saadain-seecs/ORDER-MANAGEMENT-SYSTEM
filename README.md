# Order Management System

A console-based **Order Management System** developed in **C++** that simulates a basic retail store environment. The application allows users to manage products, place orders, calculate discounts and taxes, and generate bills.

---

## Project Overview

The system provides a menu-driven interface where users can:

- Add products to inventory
- View available products
- Place orders
- Calculate discounts automatically
- Generate customer bills
- Update stock quantities after purchases

The project demonstrates the practical implementation of fundamental C++ programming concepts.

---

## Features

### Product Management
- Add product name, price, and stock quantity
- Store product information using arrays
- Maintain inventory records

### Product Display
- View all available products
- Display product details including:
  - Product Name
  - Price
  - Available Stock

### Order Processing
- Select products for purchase
- Enter desired quantity
- Validate stock availability
- Update inventory after successful orders

### Billing System
- Calculate subtotal
- Apply discounts automatically:
  - **10% discount** for orders above 10,000
  - **5% discount** for orders above 5,000
- Apply **8% tax**
- Generate a detailed bill

---

## Concepts Used

| Concept | Purpose |
|----------|----------|
| Arrays | Store product information |
| Functions | Modular program design |
| Loops | Menu handling and data display |
| Conditional Statements | Discount and validation logic |
| Switch Statements | Menu navigation |
| Variables & Data Types | Store and process data |
| Input/Output Streams | User interaction |

---

## Project Structure

### Main Functions

#### `add_product()`
Adds new products to the inventory.

#### `show_product()`
Displays all available products.

#### `total_discount()`
Calculates discounts based on order subtotal.

#### `display_bill()`
Generates and displays the final bill.

#### `place_order()`
Handles product selection, stock validation, billing, and inventory updates.

#### `main()`
Controls the menu-driven interface and program execution.

---

## Challenges Faced

- Implementing accurate discount conditions
- Applying tax after discount calculations
- Managing product stock efficiently
- Validating user input to prevent invalid orders

---

## Future Improvements

- Coupon code system
- Delivery charge calculation
- Multiple products in a single order
- File handling for permanent data storage
- Object-Oriented Programming (OOP) implementation
- Database integration
- Graphical User Interface (GUI)

---

## Technologies Used

- **C++**
- Console-Based Interface

---

## Expected Outcome

The application provides an efficient way to manage products and process customer orders while demonstrating core C++ programming concepts such as arrays, functions, loops, and conditional statements.

---

## Author

**Muhammad Saadain Zahid**
