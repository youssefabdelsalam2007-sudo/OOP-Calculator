\# OOP Calculator



A simple \*\*Calculator implemented in C++\*\* to practice Object-Oriented Programming concepts.



\## About the Project



This project implements a calculator using a `ClsCalculator` class.



The calculator keeps track of the \*\*current result\*\*, the \*\*previous result\*\*, and the \*\*latest operation performed\*\*.



\## Features



\* Addition

\* Subtraction

\* Multiplication

\* Division

\* Clear the current result

\* Return to the previous result

\* Display the latest operation and result

\* Division-by-zero validation



\## How It Works



The calculator maintains two main results:



\* \*\*Current Result:\*\* The latest calculated result.

\* \*\*Previous Result:\*\* The result before the latest operation.



Before performing an operation, the current result is stored as the previous result.



The `Delete()` function can then restore the previous result.



\## OOP Concepts Used



This project demonstrates:



\* Classes and Objects

\* Encapsulation

\* Private Data Members

\* Public Member Functions

\* Member Functions

\* Data Management inside a Class



\## Operations



The `ClsCalculator` class provides the following functions:



| Function        | Description                                |

| --------------- | ------------------------------------------ |

| `Add()`         | Adds a number to the current result        |

| `Subtract()`    | Subtracts a number from the current result |

| `Multiply()`    | Multiplies the current result by a number  |

| `Divide()`      | Divides the current result by a number     |

| `Clear()`       | Clears the current result                  |

| `Delete()`      | Restores the previous result               |

| `PrintResult()` | Displays the latest operation and result   |



\## Error Handling



The calculator prevents \*\*division by zero\*\* and displays an error message when the user attempts to divide by zero.



\## Example



The program performs the following operations:



```text

Add 10

Clear

Add 10

Subtract 50

```



The final result is:



```text

\-40

```



\## Purpose



This project was created as a practical exercise to strengthen my understanding of \*\*C++ Object-Oriented Programming\*\* and applying class-based design to a simple calculator.



\## Author



\*\*Youssef Abdel Salam\*\*



