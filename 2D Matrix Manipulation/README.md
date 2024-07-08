## Explanation of the Provided C Code

The provided C code creates and manipulates a 2D matrix based on user inputs for its dimensions and two specific values (X and Y). The code fills the matrix in a spiral pattern starting from the center and replaces any remaining zero values with a specified value. Finally, it prints the resulting matrix.

### Functionality Overview

1. **Matrix Initialization**:
   - The code initializes a 100x100 matrix filled with zeros.

2. **User Input**:
   - The user is prompted to input the dimensions of the matrix (width and height) which must be between 0 and 100.
   - The user is then prompted to input two integer values, X and Y.

3. **Spiral Pattern Filling**:
   - Starting from the center of the matrix, the code fills the matrix in a spiral pattern with the value X. The spiral expands outward by updating the matrix in left, down, right, and up directions sequentially.

4. **Filling Remaining Values**:
   - Any remaining zero values in the matrix are replaced with the value Y.

5. **Matrix Output**:
   - The resulting matrix is printed to the console with each value formatted to occupy 5 spaces for proper alignment.