# Explanation of the Provided C++ Code

## Overview
This C++ program determines if one sequence of integers is a cyclic permutation of another sequence. The program reads two sequences of integers from the user, checks for cyclic permutation, and outputs the result.

## Functions

### `bool string_unos(string s)`
This function checks if a given string represents a valid integer.

**Parameters:**
- `string s`: The input string to be checked.

**Functionality:**
1. Initializes a counter `brojac` to 0.
2. If the first character of the string is '-', increments `brojac`.
3. Iterates through the rest of the string to ensure each character is a digit between '1' and '9'.
4. Returns `true` if all characters are valid digits, otherwise returns `false`.

### `bool provjera(vektor v1, vektor v2, int n)`
This function checks if `v1` is a cyclic permutation of `v2` starting at position `n`.

**Parameters:**
- `vektor v1`: The first vector of integers.
- `vektor v2`: The second vector of integers.
- `int n`: The starting position in the second vector.

**Functionality:**
1. Iterates through the elements of `v1`.
2. Compares each element of `v1` with the corresponding element in `v2` starting from position `n` (considering wrap-around using modulo operation).
3. Returns `true` if all elements match, otherwise returns `false`.

### `int CiklickaPermutacija(vektor v1, vektor v2)`
This function finds the shift required to make `v1` a cyclic permutation of `v2`.

**Parameters:**
- `vektor v1`: The first vector of integers.
- `vektor v2`: The second vector of integers.

**Functionality:**
1. Initializes a result variable `rez` to -1.
2. Iterates through all possible shifts of `v2`.
3. Calls the `provjera` function to check if `v1` matches `v2` with the current shift.
4. If a match is found, updates `rez` with the shift value.
5. Returns `rez` which indicates the shift, or -1 if no cyclic permutation is found.

## `main` Function

**Functionality:**
1. Declares two vectors `v1` and `v2`.
2. Prompts the user to input the first sequence of integers.
3. Reads integers from the user and adds them to `v1` until an invalid input is encountered.
4. Clears the input buffer.
5. Prompts the user to input the second sequence of integers.
6. Reads integers from the user and adds them to `v2` until an invalid input is encountered.
7. Clears the input buffer.
8. Calls the `CiklickaPermutacija` function to check if `v2` is a cyclic permutation of `v1`.
9. Outputs the result to the user.