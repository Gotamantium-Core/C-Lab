# C Lab Problems 

### Cycle 1
##### Basics of C
7 questions

1. Find the roots of a quadratic equation (if-else)
2. Input a date in dd/mm/yyyy format and validate it (switch-case)
3. Find the GCD and LCM of 2 numbers (while)
4. Find the minimum and maximum from a set of N numbers (for)
5. Convert binary to its decimal equivalent (for)
6. Display perfect numbers till input N (nested loops)
7. Display N prime numbers from input (nested loops)

### Cycle 2
##### Arrays
6 questions

8. Linear search and display appropriate messages (arrays)
9. Convert decimal to its binary equivalent using an array (arrays)
10. Sort an array using **bubble sort** (arrays)
11. Binary search and display appropriate messages (arrays)
12. Input 2 mathematical sets and perform union, intersection, and difference on them (arrays)
13. Merge 2 sorted arrays such that the resultant array is also sorted without further processing (arrays)

### Cycle 3
##### Multidimensional Arrays and Strings
6 questions

14. Find the maximum element in a m x n matrix (2D arrays)
15. Check whether a matrix is symmetric. If not display its transpose (2D arrays)
16. Find all the palindrome numbers in a matrix (2D arrays)
17. Find the most frequently occuring alphabet in a line of text without case checking (strings)
18. Sort the letters in a string in alphabetic order (strings)
19. Input N student names and sort them using **exchange sort** (strings)

### Cycle 4
##### Functions
6 questions

20. Write a function to check if a number is prime and use it to display all primes in a matrix (functions and arrays)
21. Write a recursive function to find factorial and use it to find nCr (functions)
22. Write a function to check if a string is a palindrome and use it to display all paindromes in a sentence (functions and strings)
23. Write a recursive function to find the binary equivalent of a decimal and use it to convert an array of decimals to binaries (functions and arrays)
24. Write a program to find the product of 2 matrices (functions and 2D arrays)
25. Write a function to find the maximum in an array and use it to find the maximum in each row of a m x n matrix (functions and arrays)

### Cycle 5
##### Structs and Pointers
5 questions

26. Store register number, name, and 4 marks for a set of students using an array of structure and display the details with marks in descending order (structs) 
27. Define a structure for storing the coefficients and exponents of a polynomial expression. Use it to add 2 polynomials (structs)
28. Define a struct for storing a complex number. Use it to find the sum, difference, and product of 2 complex numbers (structs)
29. Implement the following string functions using pointers (pointers) 

| Si.No| Function        | Definition             |
|-----|----------------------|-----------------------------------------|
| 1.  | string length        | (int StringLength(char* s))             |
| 2.  | string copy          | (void StringCopy(char* s1, char* s2))   |
| 3.  | string comparison    | (int StringCompare(char* s1, char* s2)) |
| 4.  | string concatenation | (void StringConcat(char* s1, char* s2)) |

30. Write a program to find the 2nd largest in an array of integers using a command line argument

### Cycle 6
##### File Handling
5 questions

31. Use command line arguments to copy the contents of one file to another after converting all lowercase characters to uppercase
32. Implement the wc command from unix
33. A text file named "*student.dat*" contains data in the following format: \
` RegNo | Name | Mark 1 | Mark 2 | Mark 3 | Mark 4 | Mark 5 | Mark 6 ` \
Input a register number and display all the marks. Use a loop to continue asking for inputs

34. An unformatted data file "num.dat" contains ints written with putw(). Write a program to display the numbers stored in the file and also display the numbers in ascending order
35. You are given an unformatted file "stock.dat" containing the following information. \
`Item_Code(char(5)), Item_Name(char(30)), Unit_Price(float), Qty_Stock(float)` \
Write a C program to accept item_code and quantity_purchased of N items and display the bill in the following format: \

| Si.No | Item_Code | Item_Name | Unit_Price  | Quantity | Price |
|-------|-----------|-----------|-------------|----------|-------|
| 1.    |           |           |             |          |       |
| 2.    |           |           |             |          |       |
| $\vdots$   |           |           |             |          |       |
| N.    |           |           |             |          |       |
|       |           |           | Total Price | :        |       |

Also, update stock.dat by reducing the quantity of items sold
