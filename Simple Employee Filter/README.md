## Explanation of the Provided C Code

## Overview
This C program defines a function `izdvoji_radnike` that filters and counts employees (radnici) based on specific criteria: age, average salary, and the presence of a specific character in their name. The `main` function demonstrates the use of this function by creating an array of employees and printing the count of employees that meet the criteria.

## Structures

### `struct Datum`
Defines a date with the following fields:
- `int dan`: Day of the month.
- `int mjesec`: Month.
- `int godina`: Year.

### `struct Radnik`
Defines an employee with the following fields:
- `char ime_prezime[30]`: Name and surname of the employee.
- `struct Datum datum_rodjenja`: Date of birth of the employee.
- `int plata[12]`: Array representing the monthly salaries for a year.

## Function: `izdvoji_radnike`

### Parameters:
- `struct Radnik *r`: Pointer to an array of `Radnik` structures.
- `int broj`: The number of employees in the array.

### Functionality:
1. Initializes counters and temporary variables to store calculated values.
2. Iterates over the array of employees to process each employee's data.
3. Calculates the average monthly salary of each employee.
4. Calculates the age of the employee based on the current year (2022), and adjusts the age if the employee's birthday has not yet occurred this year.
5. Checks if the employee's name contains the letter 'R' or 'r' after the first space.
6. Increments the count of selected employees if they meet all the criteria:
   - Age between 30 and 40 years inclusive.
   - Name contains the letter 'R' or 'r'.
   - Average salary between 1000 and 2000 inclusive.
7. Resets temporary variables for the next iteration.

### Return Value:
- Returns the count of employees who meet the specified criteria.

## Function: `main`

### Functionality:
1. Creates an array `niz` of `Radnik` structures and initializes it with sample data.
2. Calls the `izdvoji_radnike` function to count the employees in `niz` who meet the criteria and prints the result.
3. Creates another array `niz2` of `Radnik` structures with one employee and calls the `izdvoji_radnike` function with an empty array to show how the function handles this case.

### Output:
The program prints the count of employees who meet the criteria for both arrays `niz` and `niz2`.