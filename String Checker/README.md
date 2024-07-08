# Explanation of the provided C code

## Overview
This C program defines a function `ime_u_datoteci` that checks if a given name (string) exists within a specified file. The main function prints a message "Ispit 1, Zadatak 4".

## Function: `ime_u_datoteci`

### Parameters:
- `const char *datoteka`: The path to the file that needs to be searched.
- `const char *ime`: The name (string) that needs to be searched within the file.

### Functionality:
1. The function attempts to open the specified file in read mode using `fopen`.
2. If the file cannot be opened, it prints "Datoteka ne postoji" (which means "File does not exist" in Bosnian) and returns `-1`.
3. If the file is opened successfully, it initializes a pointer `p_ime` to point to the start of the `ime` string and declares a character variable `C` to read characters from the file and an integer `otklon` to store the file position.
4. The function reads the file character by character using `getc`.
5. For each character read, it checks if it matches the first character of the `ime` string.
6. If there is a match, it enters a nested while loop to check subsequent characters of the `ime` string against the file's content.
7. If the entire `ime` string is found within the file, the function returns `1`.
8. If a mismatch is found, it resets the file position to the value of `otklon` (stored before the nested loop) and continues searching.
9. If the end of the file is reached without finding the `ime` string, the function returns `0`.

### Return Values:
- `1`: If the `ime` string is found within the file.
- `0`: If the `ime` string is not found within the file.
- `-1`: If the file cannot be opened.

