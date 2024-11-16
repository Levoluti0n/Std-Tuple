# 🧳 Tuple Implementation in C++ 💻

## 🚀 Overview
This project provides a custom implementation of a **tuple** in C++ using **template metaprogramming**. It mimics the functionality of the `std::tuple`, allowing you to store a collection of heterogeneous types and access them via their indices. The project demonstrates the power of **recursive inheritance** and **template specialization** in modern C++.

## 🛠️ Features
- **Recursive Inheritance**: A novel approach to implement the tuple structure using recursive inheritance.
- **Accessing Tuple Elements**: Use `get<Index>(tuple)` to retrieve tuple elements based on their index.
- **Type Safety**: Ensures that each element is stored with its corresponding type, preventing type mismatches.
- **Compile-Time Efficiency**: The tuple implementation is resolved at compile-time, resulting in efficient code generation.

## ⚡ How It Works
This implementation consists of:
- **`TupleImpl`**: A recursive struct that builds the tuple by inheriting from the next tuple layer.
- **`TupleElement`**: A struct that stores each element of the tuple, paired with an index to ensure type-safe access.
- **`get` Function**: A function that retrieves an element from the tuple using its index.
