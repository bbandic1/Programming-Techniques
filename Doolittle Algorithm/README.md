# Explanation of the Provided C++ Code

## Overview
This C++ program performs LU decomposition of a square matrix using the Doolittle algorithm. It also includes matrix multiplication and factorization verification. The program reads a matrix from the user, computes the LU decomposition, and displays the L and U matrices.

## Functions

### `matrica MnozenjeMatrica(matrica m1, matrica m2)`
This function multiplies two matrices.

**Parameters:**
- `matrica m1`: The first matrix.
- `matrica m2`: The second matrix.

**Functionality:**
1. Checks if the matrices can be multiplied (i.e., the number of columns in `m1` matches the number of rows in `m2`).
2. Initializes the result matrix with appropriate dimensions.
3. Performs matrix multiplication.
4. Returns the resulting matrix.

### `m_niz DoolittleLU(matrica m)`
This function performs LU decomposition using the Doolittle algorithm.

**Parameters:**
- `matrica m`: The input matrix.

**Functionality:**
1. Checks if the matrix is square.
2. Initializes L and U matrices.
3. Iterates through the matrix to compute the L and U matrices.
4. Throws an error if the matrix is singular.
5. Returns a pair of matrices (L and U).

### `bool ProvjeriFaktorizaciju(matrica m, m_niz trod_m)`
This function checks if the LU factorization is correct.

**Parameters:**
- `matrica m`: The original matrix.
- `m_niz trod_m`: The pair of matrices (L and U).

**Functionality:**
1. Multiplies L and U matrices.
2. Compares the result with the original matrix.
3. Returns `true` if the factorization is correct, otherwise returns `false`.

## `main` Function

**Functionality:**
1. Prompts the user to input the number of rows/columns of the matrix.
2. Reads the elements of the matrix from the user.
3. Calls the `DoolittleLU` function to perform LU decomposition.
4. Displays the L and U matrices.
5. Catches and displays any errors thrown during the process.