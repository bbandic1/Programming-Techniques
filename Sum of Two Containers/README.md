# Explanation of the Provided C++ Code

## Overview
This C++ program defines a template function `ZbirKontejnera` that sums elements from two containers and returns the result in a vector. The program reads two vectors of integers from the user, sums their elements using `ZbirKontejnera`, and prints the resulting vector.

## Functions

### `template <typename kontejner1, typename kontejner2> auto ZbirKontejnera(kontejner1 kont1, kontejner2 kont2) -> std::vector<decltype(kont1[0] + kont2[0])>`
This template function sums elements from two containers and stores the result in a vector.

**Parameters:**
- `kontejner1 kont1`: The first container.
- `kontejner2 kont2`: The second container.

**Functionality:**
1. Initializes an empty vector `kont` to store the sum.
2. Determines the sizes of both containers.
3. Iterates through the containers and adds corresponding elements.
4. If one container is longer, appends the remaining elements to the result.
5. Returns the resulting vector.

## `main` Function

**Functionality:**
1. Prompts the user to input the size and elements of the first vector.
2. Reads the size and elements of the first vector.
3. Prompts the user to input the size and elements of the second vector.
4. Reads the size and elements of the second vector.
5. Calls the `ZbirKontejnera` function to sum the elements of the two vectors.
6. Prints the resulting vector.
