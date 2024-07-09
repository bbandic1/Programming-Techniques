## Explanation of the Provided C Code

## Overview
This C program defines a function `popuni_matricu` which populates a given matrix with specific values based on the input parameters. The `main` function demonstrates the use of this function by populating a matrix and printing a part of it.

## Function: `popuni_matricu`

### Parameters:
- `double (*mat)[100]`: A pointer to a 100x100 matrix of type `double`.
- `int M`: The row index where the initial value `X` will be placed.
- `int N`: The column index where the initial value `X` will be placed.
- `double X`: The initial value to be placed in the matrix at position `(M, N)`.

### Functionality:
1. Sets the element at position `(M, N)` of the matrix `mat` to the value `X`.
2. Fills the row `M` from column `N-1` to column `0` by halving the value from the previous column.
3. Fills the row `M` from column `N+1` to column `99` by doubling the value from the previous column.
4. Fills all rows below `M` by adding `1` to the corresponding elements of the previous row.
5. Fills all rows above `M` by subtracting `1` from the corresponding elements of the next row.

### Example:
If `M=1`, `N=1`, and `X=5`, the value at position `(1, 1)` is set to `5`. The values in row `1` will be populated such that columns to the left of `N` are halved successively and columns to the right of `N` are doubled successively. The rows below and above `M` will be filled based on the described logic.

## Function: `main`

### Functionality:
1. Initializes a 100x100 matrix `mat`.
2. Calls the `popuni_matricu` function to populate the matrix `mat` with initial value `5` at position `(1, 1)`.
3. Prints the first `3x3` submatrix of `mat` to the standard output.

### Output:
The program will print the first `3x3` submatrix of `mat` after populating it using the `popuni_matricu` function. 