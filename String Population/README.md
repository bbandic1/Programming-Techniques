## Explanation of the Provided C Code

## Overview
This C program defines a function `popuni_recenicu` that fills a given string with a specific word from an array of words based on certain conditions. The `main` function demonstrates the use of this function by populating a sentence and printing it.

## Function: `popuni_recenicu`

### Parameters:
- `char *string`: The input string which will be modified.
- `char *rijeci[]`: An array of words.
- `int duzina`: The number of words in the array `rijeci`.

### Functionality:
1. Calculates the length of the input `string`.
2. Finds the longest sequence of spaces in the `string`.
3. Identifies the first word in the array `rijeci` whose length matches the length of the longest sequence of spaces minus two.
4. Replaces the longest sequence of spaces in the `string` with the identified word.

### Steps:
1. Counts the total number of characters in `string`.
2. Iterates through `string` to find the longest sequence of spaces (`max`) and its position (`maxbr`).
3. If the length of the `string` matches `maxbr`, it increments `max`.
4. Finds the word in `rijeci` that has a length equal to `max - 2` and stores its index.
5. Replaces the spaces in `string` at position `maxbr - max + 1` with the identified word from `rijeci`.

## Function: `main`

### Functionality:
1. Initializes a string `recenica` with a sentence containing leading spaces.
2. Initializes an array `rijeci` with five words.
3. Calls the `popuni_recenicu` function to modify the `recenica` by replacing the leading spaces with an appropriate word from `rijeci`.
4. Prints the modified `recenica` to the standard output.

### Output:
The program prints the modified sentence with the longest sequence of leading spaces replaced by an appropriate word from the `rijeci` array.