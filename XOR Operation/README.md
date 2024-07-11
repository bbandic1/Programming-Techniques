# Explanation of the Provided C Code

## Overview
This C program reads an array of integers and finds the smallest non-negative integer `X` such that applying the bitwise XOR operation between each element of the array and `X` results in a non-decreasing sequence. If no such `X` exists, the program outputs `-1`.

## `main` Function

**Functionality:**
1. **Input:**
   - Prompts the user to input an integer `n` (the size of the array), ensuring `1 <= n <= 100`.
   - Reads `n` integers into the array `niz`.

2. **Find Maximum Element:**
   - Identifies the maximum value `max` in the array.

3. **Search for `X`:**
   - Iterates `i` from `0` to `max*2` to find the smallest `X` such that XORing each element of the array with `X` results in a non-decreasing sequence.
   - For each `i`, performs the XOR operation and checks if the resulting sequence is non-decreasing.

4. **Output:**
   - Prints the value of `X` if found.
   - If no such `X` exists, prints `-1`.

### Detailed Steps

1. **Input Validation:**
   - Continuously prompts the user to input `n` until it is within the range `[1, 100]`.

2. **Array Input:**
   - Reads `n` integers into the array `niz`.

3. **Find Maximum Element:**
   - Initializes `max` with the first element of the array.
   - Iterates through the array to find the maximum value.

4. **XOR Operation and Check:**
   - For each `i` from `0` to `max*2`:
     - Creates a copy of the array where each element is XORed with `i`.
     - Checks if the copied array is non-decreasing.
     - If a non-decreasing sequence is found, sets `rastuci` to `1` and breaks the loop.

5. **Output Result:**
   - If a valid `X` is found (`rastuci` is `1`), prints `X`.
   - If no valid `X` is found after the loop, prints `-1`.