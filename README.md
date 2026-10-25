# PRACTICAL ASSIGNMENT 11

## 1. Student Details

- **Name:** Samruddhi Amol Mhamane
- **PRN / Roll No.:** 202501110050
- **Class:** SY B.Tech CSE (AIML)
- **Division:** A
- **Batch:** A2
- **Faculty Name:** Khushal Khairnar Sir

## 2. Practical Details

- **Practical No.:** 11
- **Practical Title:** STANDARD TEMPLATE LIBRARY
- **Course:** Problem Solving Using Object Oriented Programming (C++)
- **Course Code:** 2304261
- **Assignment Open Date:** 18 October 2026
- **Assignment Due Date:** 30 October 2026

## 3. Problem Statement

**A.** Implement an assignment based on the `list` class as an STL container.

**B.** Implement an assignment based on the `vector` class as an STL container.

## 4. Objectives

1. To understand the Standard Template Library (STL) in C++.
2. To learn the use of the `list` container.
3. To learn the use of the `vector` container.
4. To perform insertion and deletion operations using STL containers.
5. To display and access elements stored in containers.

## 5. Expected Learning Outcomes

After completing this practical, students will be able to:

1. Explain the purpose of STL in C++.
2. Create and use a list container.
3. Create and use a vector container.
4. Perform insertion and deletion operations.
5. Display container elements using loops.
6. Differentiate between list and vector containers.

## 6. Theory / Concept

### Standard Template Library (STL)

The Standard Template Library (STL) is a collection of template classes and functions in C++ that provides ready-made data structures and algorithms.

STL includes containers such as vectors, lists, stacks, queues, and maps.

### A. List Container

A `list` is an STL container that stores elements in a doubly linked list.

**Important points:**
- Header file: `<list>`
- `push_back()` inserts an element at the end.
- `push_front()` inserts an element at the beginning.
- `pop_back()` removes the last element.
- `pop_front()` removes the first element.
- Elements can be traversed using a loop.

### B. Vector Container

A `vector` is an STL container that stores elements in a dynamically resizable array.

**Important points:**
- Header file: `<vector>`
- `push_back()` inserts an element at the end.
- `pop_back()` removes the last element.
- `size()` returns the number of elements.
- Elements can be accessed using indexes and traversed using loops.
- A vector provides efficient random access to its elements.

### Difference Between List and Vector

| List | Vector |
|---|---|
| Uses a doubly linked list. | Uses a dynamically resizable array. |
| Supports insertion and deletion at both ends. | Commonly uses `push_back()` and `pop_back()` for end operations. |
| Does not provide constant-time random access by index. | Provides constant-time random access by index. |
| Requires links between elements. | Stores elements contiguously in memory. |

## 7. Algorithm / Pseudocode

### A. List Container

1. Start.
2. Include the `<iostream>` and `<list>` header files.
3. Create an empty list of integers.
4. Insert elements using `push_back()` and `push_front()`.
5. Display all elements of the list.
6. Remove the first element using `pop_front()`.
7. Display the updated list.
8. Stop.

### B. Vector Container

1. Start.
2. Include the `<iostream>` and `<vector>` header files.
3. Create an empty vector of integers.
4. Insert elements using `push_back()`.
5. Display all vector elements.
6. Display the number of elements using `size()`.
7. Remove the last element using `pop_back()`.
8. Display the updated vector.
9. Stop.

## 8. Technology / Tools / Libraries Used

- **Programming Language:** C++
- **IDE:** Embarcadero Dev-C++ 6.3
- **Header Files:** `<iostream>`, `<list>`, `<vector>`
- **Concepts Used:** STL containers, loops, insertion and deletion operations.

## 9. Implementation / GitHub Repository

### Program A: List Container

**File Name:** `list_container.cpp`

```cpp
#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> numbers;

    numbers.push_back(20);
    numbers.push_back(30);
    numbers.push_front(10);

    cout << "List elements: ";
    for (int value : numbers)
    {
        cout << value << " ";
    }

    numbers.pop_front();

    cout << "\nAfter removing the first element: ";
    for (int value : numbers)
    {
        cout << value << " ";
    }

    cout << endl;

    return 0;
}
```

**Output:**

```text
List elements: 10 20 30
After removing the first element: 20 30
```

### Program B: Vector Container

**File Name:** `vector_container.cpp`

```cpp
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> numbers;

    numbers.push_back(10);
    numbers.push_back(20);
    numbers.push_back(30);

    cout << "Vector elements: ";
    for (int value : numbers)
    {
        cout << value << " ";
    }

    cout << "\nNumber of elements: " << numbers.size();

    numbers.pop_back();

    cout << "\nAfter removing the last element: ";
    for (int value : numbers)
    {
        cout << value << " ";
    }

    cout << endl;

    return 0;
}
```

**Output:**

```text
Vector elements: 10 20 30
Number of elements: 3
After removing the last element: 10 20
```

**Suggested GitHub Repository Name:** `OOP-Practical-Assignment11`

## 10. Test Cases / Input and Output

Both programs execute without requiring user input.

| Test Case | Operation | Expected Output | Result |
|---|---|---|---|
| 1 | Display list elements | `10 20 30` | Pass |
| 2 | Remove the first list element | `20 30` | Pass |
| 3 | Display vector elements | `10 20 30` | Pass |
| 4 | Count vector elements | `3` | Pass |
| 5 | Remove the last vector element | `10 20` | Pass |

## 11. Results / Observations

1. The list container successfully stored and displayed integer elements.
2. The `push_front()` function inserted an element at the beginning of the list.
3. The `pop_front()` function removed the first element from the list.
4. The vector container successfully stored and displayed integer elements.
5. The `size()` function returned the number of elements in the vector.
6. The `pop_back()` function removed the last element from the vector.

## 12. Conclusion

In this practical, the Standard Template Library (STL) containers `list` and `vector` were implemented successfully in C++. Insertion, deletion, traversal, and size-related operations were performed. The practical helped in understanding the basic features and differences between list and vector containers.

## 13. Assignment Questions

**Q1. What is STL in C++?**

STL stands for Standard Template Library. It provides reusable template-based containers, algorithms, and iterators in C++.

**Q2. What is a list container?**

A list is an STL container that stores elements in a doubly linked list.

**Q3. What is a vector container?**

A vector is an STL container that stores elements in a dynamically resizable array.

**Q4. What is the use of `push_back()`?**

The `push_back()` function inserts an element at the end of a container.

**Q5. What is the difference between `pop_front()` and `pop_back()`?**

`pop_front()` removes the first element, whereas `pop_back()` removes the last element.

**Q6. What is the use of the `size()` function?**

The `size()` function returns the number of elements currently stored in a container.

**Q7. Which header files are required for list and vector?**

The `<list>` header file is required for the list container, and the `<vector>` header file is required for the vector container.

## 14. Student Declaration

I hereby declare that I have completed Practical Assignment 11 titled “Standard Template Library” as part of the Problem Solving Using Object Oriented Programming (C++) course. The programs have been implemented and tested to understand the use of list and vector containers in C++.

**Student Name:** Samruddhi Amol Mhamane

**PRN:** 202501110050

**Signature:** __________________

**Date:** __________________
