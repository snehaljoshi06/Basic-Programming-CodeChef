# Matrix — C++ Problem Solutions

**Student:** Snehal Yogesh Joshi  
**PRN:** 202501110055  
**Class:** SY AIML  
**Batch:** B1  
**Course:** Problem Solving Skills Lab  
**Topic:** 4 — Matrix  
**Language:** C++17

This folder contains all 20 problems in the Matrix section of the supplied Moodle workbook, in the same order.

## Solutions

| # | Problem | Source |
|---:|---|---|
| 1 | Traverse a matrix in spiral form. | [01-spiral-traversal.cpp](solutions/01-spiral-traversal.cpp) |
| 2 | Search for a target in a row-wise sorted matrix with O(log(m × n)) time. | [02-search-sorted-matrix.cpp](solutions/02-search-sorted-matrix.cpp) |
| 3 | Find the median in a row-wise sorted matrix (odd rows and columns). | [03-median-row-wise-sorted.cpp](solutions/03-median-row-wise-sorted.cpp) |
| 4 | Find the first row with the maximum number of 1s. | [04-row-with-maximum-ones.cpp](solutions/04-row-with-maximum-ones.cpp) |
| 5 | Sort all elements of a matrix. | [05-sort-matrix-elements.cpp](solutions/05-sort-matrix-elements.cpp) |
| 6 | Find the maximum-area rectangle containing only 1s. | [06-maximum-rectangle-ones.cpp](solutions/06-maximum-rectangle-ones.cpp) |
| 7 | Find the maximum mat[c][d] − mat[a][b] where c > a and d > b. | [07-maximum-matrix-difference.cpp](solutions/07-maximum-matrix-difference.cpp) |
| 8 | Rotate a square matrix 90 degrees clockwise in place. | [08-rotate-matrix-90.cpp](solutions/08-rotate-matrix-90.cpp) |
| 9 | Find the Kth smallest element in a row- and column-wise sorted matrix. | [09-kth-smallest-sorted-matrix.cpp](solutions/09-kth-smallest-sorted-matrix.cpp) |
| 10 | Find all elements common to every row. | [10-common-elements-all-rows.cpp](solutions/10-common-elements-all-rows.cpp) |
| 11 | Check whether a square matrix is invertible. | [11-invertible-matrix.cpp](solutions/11-invertible-matrix.cpp) |
| 12 | Represent a sparse matrix using triplets. | [12-sparse-matrix-triplet.cpp](solutions/12-sparse-matrix-triplet.cpp) |
| 13 | Find the largest square submatrix containing only 1s. | [13-largest-square-ones.cpp](solutions/13-largest-square-ones.cpp) |
| 14 | Find the trace and normal (Frobenius norm) of a matrix. | [14-trace-and-normal.cpp](solutions/14-trace-and-normal.cpp) |
| 15 | Print the lower triangular matrix. | [15-lower-triangular-matrix.cpp](solutions/15-lower-triangular-matrix.cpp) |
| 16 | Print the upper triangular matrix. | [16-upper-triangular-matrix.cpp](solutions/16-upper-triangular-matrix.cpp) |
| 17 | Perform message encoding using matrix multiplication. | [17-message-encoding-matrix-multiplication.cpp](solutions/17-message-encoding-matrix-multiplication.cpp) |
| 18 | Find the LU decomposition of a matrix. | [18-lu-decomposition.cpp](solutions/18-lu-decomposition.cpp) |
| 19 | Find the determinant of a matrix. | [19-determinant-matrix.cpp](solutions/19-determinant-matrix.cpp) |
| 20 | Find the sum and product of all matrix elements. | [20-sum-product-matrix-elements.cpp](solutions/20-sum-product-matrix-elements.cpp) |

## Input conventions

The workbook gives problem statements but does not provide a common input format or sample input/output for every task. These are standalone programs with simple standard-input formats:
- Most matrix programs read the row and column counts, followed by the matrix values.
- Square-matrix programs read N, followed by N × N values.
- Search programs read the matrix, then the target or K value.
- Matrix multiplication for message encoding reads R, K, C, then an R × K message matrix and a K × C key matrix.
- LU decomposition uses the Doolittle method without pivoting.

Check each source file for the exact input order before running it.

## Compile

```bash
g++ -std=c++17 -O2 -Wall -Wextra solutions/01-spiral-traversal.cpp -o program
./program
```

## Implementation notes

- Problem 17 is implemented as general matrix multiplication of a numeric message block by a key matrix. The workbook does not specify a character-to-number mapping or a particular cipher convention.
- Problem 18 uses LU decomposition without pivoting; it reports when a zero pivot prevents that method from proceeding.
- Problems 11 and 19 use floating-point Gaussian elimination for invertibility and determinant calculations.
- Problem 20's product can exceed the range of a 64-bit integer for large inputs; use small values when testing.
- No CodeChef acceptance status or fabricated screenshots are claimed.
