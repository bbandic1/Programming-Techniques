# Explanation of the Provided C++ Code

## Overview
This C++ program processes a sentence input by the user, categorizes words by their lengths, and prints them in uppercase. It includes functions for converting strings to uppercase, extracting words, and sorting them by length.

## Functions

### `std::string uvecaj(std::string s)`
This function converts all lowercase letters in a string to uppercase.

**Parameters:**
- `std::string s`: The input string to be converted to uppercase.

**Functionality:**
1. Iterates through each character in the string.
2. If a character is a lowercase letter, converts it to the corresponding uppercase letter.
3. Returns the modified string.

### `std::string uzmirijec(std::string s, int i, int brojac)`
This function extracts a word from a given position in a string.

**Parameters:**
- `std::string s`: The input string.
- `int i`: The ending position of the word.
- `int brojac`: The length of the word.

**Functionality:**
1. Iterates backward from position `i` for `brojac` characters.
2. Collects the characters into a new string.
3. Returns the extracted word.

### `std::array<std::vector<std::string>, 100> RazvrstajRijeciPoDuzini(std::string s)`
This function sorts words in a string by their lengths.

**Parameters:**
- `std::string s`: The input string containing words to be sorted.

**Functionality:**
1. Initializes an array of vectors to store words of different lengths.
2. Iterates through the string to find words.
3. Extracts each word and converts it to uppercase.
4. Adds the word to the corresponding vector based on its length.
5. Returns the array of vectors.

## `main` Function

**Functionality:**
1. Prompts the user to input a sentence.
2. Reads the input sentence.
3. Calls the `RazvrstajRijeciPoDuzini` function to sort the words by length.
4. Catches any exceptions for words that are too long.
5. Prints the sorted words by their lengths.