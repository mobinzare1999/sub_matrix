# sub_matrix
Iterations on matrixes

A text file contains an array of integers with the following format:

• the first line of the file specifies the dimensions of the matrix (number of rows nr and number of columns nc)nc), separated by spaces Assume that both values are <= 20.

• each of the subsequent lines contains the nc values corresponding to a row of the matrix, with one or more spaces as separators.

Write a C program that:

• reads this matrix from the input file (the name of the file, maximum 20 characters, is read from the keyboard)

• repeatedly asks the user for a dim value between 1 and the minimum between nr and nc and prints all the square sub-matrixes of size dim that are contained in the input matrix

• prints the square sub-matrix, among those previously identified, that has the maximum sum of ele-ments

• terminates the iterations if the user enters a value that is inconsistent with the size of the matrix
