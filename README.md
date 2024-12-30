# Operator Overloading Demo - Prefix Increment

A C++ program demonstrating operator overloading by implementing a custom prefix increment (++) operator for a user-defined class.

## Description

This program shows how to overload the prefix increment operator (++) for a custom class 'Count'. It includes a constructor initialization and demonstrates how operator overloading can be used to define custom behavior for standard operators.

### Key Features
- Operator overloading implementation
- Constructor initialization
- Prefix increment operation
- Custom class definition
- Member function access

## Class Structure

```cpp
class Count {
    public:
        int value;
        Count();                  // Constructor
        void operator ++();       // Overloaded operator
        void display();           // Display function
};

