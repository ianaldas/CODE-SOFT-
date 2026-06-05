# Task 1 - Number Guessing Game

## 📌 Project Overview
The Number Guessing Game is a simple console-based C++ application where the computer generates a random number, and the user attempts to guess it. The program provides feedback after each guess until the correct number is found.

## 🚀 Features
- Random number generation
- User-friendly console interface
- Hint system (Too High / Too Low)
- Unlimited attempts until the correct guess
- Displays success message when the number is guessed correctly

## 🛠️ Technologies Used
- C++
- Visual Studio Code
- GitHub

## ⚙️ How It Works
1. The program generates a random number.
2. The user enters a guess.
3. The program compares the guess with the secret number.
4. If the guess is too high, the program displays "Too High".
5. If the guess is too low, the program displays "Too Low".
6. The game continues until the user guesses the correct number.
7. A congratulatory message is displayed when the user win

## 💻 Sample Output

### Example 1
```
Welcome to Number Guessing Game!

Guess a number between 1 and 100: 50

Too Low! Try Again.

Guess a number between 1 and 100: 75

Too High! Try Again.

Guess a number between 1 and 100: 68

Congratulations! You guessed the correct number.
```

### Example 2
```
Welcome to Number Guessing Game!

Guess a number between 1 and 100: 25

Too Low! Try Again.

Guess a number between 1 and 100: 40

Too Low! Try Again.

Guess a number between 1 and 100: 55

Congratulations! You guessed the correct number.
```

## 📚 Concepts Used
- Variables and Data Types
- Loops (while/do-while)
- Conditional Statements (if-else)
- Random Number Generation
- User Input and Output
- Problem Solving

## 🎯 Learning Outcomes
- Understanding random number generation
- Working with loops and conditions
- Improving logical thinking
- Building interactive console applications
- Handling user input effectively

## 🧑🏻‍💻 Author
Anal Kumar Das 
## 📜 Internship
CodSoft C++ Programming Internship


# Task 2 - Simple Calculator

## 📌 Project Overview
The Simple Calculator is a console-based C++ application that performs basic arithmetic operations. Users can enter two numbers and choose an operator to get the desired result.

## 🚀 Features
- Addition (+)
- Subtraction (-)
- Multiplication (*)
- Division (/)
- User-friendly interface
- Fast and accurate calculations

## 🛠️ Technologies Used
- C++
- Visual Studio Code
- GitHub

## ⚙️ How It Works
1. The program asks the user to enter the first number.
2. The user selects an arithmetic operator (+, -, *, /).
3. The program asks for the second number.
4. Using a switch-case statement, the selected operation is performed.
5. The result is displayed on the screen.

## 📂 File Structure
```
calculator.cpp
```

## ▶️ How to Run

### Compile the Program
```bash
g++ calculator.cpp -o calculator
```

### Run the Program
```bash
./calculator
```

## 💻 Sample Outputs

### Addition
```
----- Simple Calculator -----

Enter first number: 15
Enter an operator (+, -, *, /): +
Enter second number: 10

Result = 25
```

### Subtraction
```
----- Simple Calculator -----

Enter first number: 20
Enter an operator (+, -, *, /): -
Enter second number: 8

Result = 12
```

### Multiplication
```
----- Simple Calculator -----

Enter first number: 12
Enter an operator (+, -, *, /): *
Enter second number: 5

Result = 60
```

### Division
```
----- Simple Calculator -----

Enter first number: 50
Enter an operator (+, -, *, /): /
Enter second number: 10

Result = 5
```

## 📚 Concepts Used
- Variables and Data Types
- User Input/Output
- Arithmetic Operators
- Switch-Case Statements
- Basic Problem Solving

## 🎯 Learning Outcomes
- Improved understanding of C++ fundamentals
- Learned how to use switch-case statements
- Practiced user interaction through console applications
- Gained experience with arithmetic operations in C++

## 👩‍💻 Author
Anal Kumar Das

## 📜 Internship
CodSoft C++ Programming Internship

# Task 3 -🎮 Tic-Tac-Toe Game in C++

## 📌 Project Overview

This project is a console-based Tic-Tac-Toe game developed in C++. The game provides an interactive environment where two players compete by placing their symbols (**X** and **O**) on a 3×3 board. The program automatically detects winning combinations, validates moves, and declares the game result.

## ✨ Key Features

✔ Interactive 2-Player Gameplay
✔ Real-Time Board Updates
✔ Win and Draw Detection
✔ Invalid Move Handling
✔ Clean and User-Friendly Interface
✔ Modular Function-Based Design

## 🛠 Technologies Used

* C++
* Object-Oriented & Structured Programming Concepts
* Standard Template Library (STL)

## 🎯 How the Game Works

1. The game starts with an empty 3×3 board.
2. Player **X** makes the first move.
3. Players alternate turns by selecting a position from **1–9**.
4. The game checks for:

   * Horizontal Wins
   * Vertical Wins
   * Diagonal Wins
5. If all cells are filled without a winner, the game ends in a draw.

## 📷 Sample Gameplay

```text
 1 | 2 | 3
---|---|---
 4 | 5 | 6
---|---|---
 7 | 8 | 9

Player X: 1
Player O: 5
Player X: 2
Player O: 8
Player X: 3

Player X Wins!
```

## 🚀 Skills Demonstrated

* Arrays and Matrix Manipulation
* Functions and Modular Programming
* Conditional Statements
* Looping Structures
* Input Validation
* Game Development Fundamentals

## 💡 Future Enhancements

* Single Player Mode with AI
* Score Tracking System
* Graphical User Interface (GUI)
* Multiplayer Over Network

## 📚 Learning Outcome

Developing this project strengthened my understanding of C++ programming, problem-solving techniques, game logic implementation, and user interaction in console applications.

## 👨‍💻 Author

**Anal Kumar Das**
B.Tech CSE Student

## Internship

CodSoft C++ Programming internship
