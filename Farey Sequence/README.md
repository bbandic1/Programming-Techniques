## Explanation of the Provided C Code

This C code calculates and prints the first 100 terms of the Farey sequence based on user input.

### Variables and Arrays

- **Variables**:
  - `n`: User-input integer representing the number of terms in the Farey sequence.
  - `i`: Loop counter used throughout the program.
  - `x`, `y`: Double variables used to calculate terms of the sequence.
  
- **Arrays**:
  - `niz[100]`: Array to store the calculated terms of the Farey sequence.
  - `kopija[100]`: Array to store intermediate values during the computation.

### Input and Initialization

- Prompts the user to enter an integer `n`.
- Initializes the arrays `kopija` and `niz` with initial values specific to the Farey sequence:
  - `kopija[0] = 0`, `kopija[1] = 1`, `kopija[2] = 1`, `kopija[3] = n`.
  - `niz[0] = 0`, `niz[1] = 1/n`.

### Farey Sequence Calculation

- **Loop Execution**:
  - Continues iterating until the variable `y` equals `1.0`.
  - Inside the loop, calculates the next term of the Farey sequence using the formulas:
    ```
    x = floor((kopija[1] + n) / kopija[3]) * kopija[2] - kopija[0];
    y = floor((kopija[1] + n) / kopija[3]) * kopija[3] - kopija[1];
    ```
  - Stores the calculated term `x / y` in the array `niz`.
  - Updates the values in the `kopija` array for the next iteration.

- **Termination**:
  - The loop terminates either when `y` becomes `1.0` or after 100 terms have been calculated.

### Output

- **Printing Results**:
  - Iterates through the `niz` array and prints each term formatted to three decimal places using `printf("%.3f ", niz[i])`.
  - Stops printing if a term `niz[i]` equals `1.0`.

### Conclusion

This program demonstrates the computation and printing of the first 100 terms of the Farey sequence based on user-provided input `n`. It utilizes loops, conditionals, and arithmetic operations to calculate each term iteratively and store them in an array for output.
