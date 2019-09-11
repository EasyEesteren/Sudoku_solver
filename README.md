# Sudoku_solver
A C program which uses a backtracking algorithm to solve Sudoku squares given to it as input

Input grids must be 9 rows by 9 columns.
Grids must be passed line by line (each line is one parameter) to the solver.
Here is an example of valid input:
./a.out "........2" "....3...." "........." "........." "........." "........." "........." "........." "........."
result:
1 3 4 5 6 7 8 9 2
2 5 6 8 3 9 1 4 7
7 8 9 1 2 4 3 5 6
3 1 2 4 5 6 7 8 9
4 6 5 7 9 8 2 1 3
8 9 7 2 1 3 4 6 5
5 2 3 6 4 1 9 7 8
6 4 8 9 7 2 5 3 1
9 7 1 3 8 5 6 2 4
