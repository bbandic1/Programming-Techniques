# Explanation of the Provided C++ Code

## Overview
This C++ program verifies Goldbach's conjecture for a given even number. It determines if the number can be expressed as the sum of two prime numbers. The program includes functions for checking prime numbers and for finding the prime pair that sums to the given number.

## Functions

### `bool DaLiJeProst(int n)`
This function checks if a given number is prime.

**Parameters:**
- `int n`: The number to be checked.

**Functionality:**
1. Returns `false` if `n` is less than or equal to 1.
2. Iterates from 2 to the square root of `n`.
3. If `n` is divisible by any number in this range, returns `false`.
4. If no divisors are found, returns `true`.

### `void Goldbach(int n, int &p, int &q)`
This function finds two prime numbers that sum up to a given even number.

**Parameters:**
- `int n`: The given even number.
- `int &p`: Reference to store the first prime number.
- `int &q`: Reference to store the second prime number.

**Functionality:**
1. Throws an error if `n` is less than or equal to 2.
2. Creates a vector to store prime numbers less than `n`.
3. Populates the vector with prime numbers using the `DaLiJeProst` function.
4. Iterates through the vector to find two primes that sum up to `n`.
5. If no such pair is found, throws an error.

## `main` Function

**Functionality:**
1. Prompts the user to input a number.
2. Reads the number.
3. Calls the `Goldbach` function to find the prime pair.
4. Catches any exceptions if the decomposition is not possible.
5. Outputs the result to the user.