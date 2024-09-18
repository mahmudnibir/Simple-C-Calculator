# Simple C Calculator

## Description

This is a simple command-line calculator program written in C. It performs basic arithmetic operations such as addition, subtraction, multiplication, and division based on user input.

## Features

- **Addition:** Calculates the sum of two numbers.
- **Subtraction:** Computes the difference between two numbers.
- **Multiplication:** Multiplies two numbers.
- **Division:** Divides the first number by the second, with error handling for division by zero.

## Requirements

- **Compiler:** A C compiler (e.g., GCC, Clang)
- **Operating System:** Cross-platform (Windows, macOS, Linux)

## Usage

1. **Compile the Program**

   To compile the program, use the following command:

   ```bash
   gcc -o calculator calculator.c
   ```

   This command will generate an executable file named `calculator`.

2. **Run the Program**

   Execute the compiled program by running:

   ```bash
   ./calculator
   ```

   On Windows, use:

   ```bash
   calculator.exe
   ```

3. **Input**

   - **Enter two numbers** separated by a space.
   - **Enter an operator** (`+`, `-`, `*`, `/`) when prompted.

4. **Output**

   The program will display the result of the arithmetic operation based on the operator provided.

## Example

```
Enter two numbers: 10 5
Enter an operator (+, -, *, /): +
The sum of the numbers is 15.000000
```

```
Enter two numbers: 10 0
Enter an operator (+, -, *, /): /
Error: Division by zero is not allowed.
```

## Error Handling

- The program checks for division by zero and prints an error message if attempted.
- It also prints an error message for invalid operators.

## Author

- **Name:** Nibir Mahmud
- **Email:** [nibirbbkr@gmail.com]

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.
