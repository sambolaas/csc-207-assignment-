# C++ Odd or Even Checker

A simple C++ console application that takes an integer from the user and determines whether it is an odd or even number.

## How It Works
The program uses the modulo operator (`%`) to divide the input number by `2`:
* If the remainder is `0`, the number is **even**.
* Otherwise, the number is **odd**.

## Example Output
```text
Enter an integer: 7
7 is an odd number.
```

```text
Enter an integer: 12
12 is an even number.
```

## How to Run
1. Download `odd_even.cpp` from this repository.
2. Compile the code using a C++ compiler (such as `g++`):
   ```bash
   g++ odd_even.cpp -o odd_even
   ```
3. Run the compiled program:
   ```bash
   ./odd_even
   ```
