# Simple Calculator Program

This is a simple calculator program written in C++. The program performs basic arithmetic operations such as addition, subtraction, multiplication, and division based on user input.

## How It Works

1. The program prompts the user to enter the first number.
2. The user is then asked to enter an arithmetic operation (`+`, `-`, `*`, `/`).
3. The program prompts the user to enter the second number.
4. The program performs the specified operation on the two numbers.
5. The result of the operation is displayed.

## Code Explanation
                
```cpp
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    // Variables
    string operation;
    double number1, number2;

    // Input
    cout << "Enter first number: ";
    cin >> number1; 
    cout << "Enter operation (+, -, *, /): ";
    cin >> operation;
    cout << "Enter second number: ";
    cin >> number2;

    // if else statement checking entered operation
    if (operation == "+") {
        cout << number1 + number2; 
    } 
    else if (operation == "-") {
        cout << number1 - number2;
    } 
    else if (operation == "*") {
        cout << number1 * number2;
    } 
    else if (operation == "/") {
        cout << number1 / number2;
    }
    else {
        cout << "Not recognized either operation or number:(";
    }

    return 0;
}
```

### Detailed Steps

#### Variable Declaration
The program declares three variables:
- `operation` of type `string` to store the arithmetic operation.
- `number1` and `number2` of type `double` to store the two numbers.

#### User Input
- The program prompts the user to enter the first number and stores it in `number1`.
- The user is then prompted to enter the operation, which is stored in `operation`.
- Finally, the user is prompted to enter the second number, stored in `number2`.

#### Operation Execution
- The program uses an `if-else` statement to check the value of `operation`.
- Based on the operation entered (`+`, `-`, `*`, `/`), it performs the corresponding arithmetic operation on `number1` and `number2`.
- The result of the operation is then printed to the console.

#### Error Handling
- If the user enters an unrecognized operation, the program outputs an error message indicating that the operation or number is not recognized.

### Example Usage

```bash
Enter first number: 5
Enter operation (+, -, *, /): *
Enter second number: 3
15
```

In this example, the user enters `5` as the first number, `*` as the operation, and `3` as the second number. The program calculates `5 * 3` and outputs `15`.

### Installation
First of all, make sure you have Git installed on your Windows machine:

```bash
C:\Users\Richard> git --version
git version 2.45.0.windows.1
C:\Users\Richard>
```

As you can see, we get the output of the version, meaning we do have Git installed. How we can clone the repo:

```bash
git clone --recursive http://gitea.compiled.htb:3000/richard/Calculator.git
```

After that, double click `Calculator.sln` and Visual Studio will open with the project. Hit `CTRL + SHIFT + B` to compile it.

### Notes
- Ensure to enter valid numeric values and supported operations (+, -, *, /).
- The program does not handle division by zero; be cautious when entering the second number for division.

Enjoy!