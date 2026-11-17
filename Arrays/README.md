# Arrays — C++ Problem Solutions

**Student:** Snehal Yogesh Joshi  
**PRN:** 202501110055  
**Class:** SY AIML  
**Batch:** B1  
**Course:** Problem Solving Skills Lab  
**Topic:** 3 — Array  
**Language:** C++17

This folder contains the 30 programs in the Array section (problems 1–30) of the supplied workbook, in the original order.

## Solutions

| # | Problem | Source |
|---:|---|---|
| 1 | Reverse the given array or string. | [01-solution.cpp](solutions/01-solution.cpp) |
| 2 | Find maximum and minimum with minimum comparisons. | [02-solution.cpp](solutions/02-solution.cpp) |
| 3 | Find the Kth smallest element (all elements distinct). | [03-solution.cpp](solutions/03-solution.cpp) |
| 4 | Sort an array containing only 0s, 1s and 2s without a sorting algorithm. | [04-solution.cpp](solutions/04-solution.cpp) |
| 5 | Move negative numbers to the beginning and positive numbers to the end with constant extra space. | [05-solution.cpp](solutions/05-solution.cpp) |
| 6 | Find the union and intersection of two sorted arrays. | [06-solution.cpp](solutions/06-solution.cpp) |
| 7 | Cyclically rotate an array by one position. | [07-solution.cpp](solutions/07-solution.cpp) |
| 8 | Find the maximum sum of a contiguous subarray. | [08-solution.cpp](solutions/08-solution.cpp) |
| 9 | Minimize the maximum difference between tower heights after adding or subtracting K. | [09-solution.cpp](solutions/09-solution.cpp) |
| 10 | Find the minimum number of jumps to reach the end. | [10-solution.cpp](solutions/10-solution.cpp) |
| 11 | Find the duplicate without modifying the array and using constant extra space. | [11-solution.cpp](solutions/11-solution.cpp) |
| 12 | Merge two sorted arrays without extra space. | [12-solution.cpp](solutions/12-solution.cpp) |
| 13 | Kadane's Algorithm — maximum subarray sum. | [13-solution.cpp](solutions/13-solution.cpp) |
| 14 | Merge overlapping intervals. | [14-solution.cpp](solutions/14-solution.cpp) |
| 15 | Find the next permutation in place. | [15-solution.cpp](solutions/15-solution.cpp) |
| 16 | Count inversions in an array. | [16-solution.cpp](solutions/16-solution.cpp) |
| 17 | Best time to buy and sell stock once. | [17-solution.cpp](solutions/17-solution.cpp) |
| 18 | Count pairs whose sum equals K. | [18-solution.cpp](solutions/18-solution.cpp) |
| 19 | Find common elements in three sorted arrays. | [19-solution.cpp](solutions/19-solution.cpp) |
| 20 | Rearrange positive and negative numbers alternately, preserving order. | [20-solution.cpp](solutions/20-solution.cpp) |
| 21 | Check whether a subarray with sum zero exists. | [21-solution.cpp](solutions/21-solution.cpp) |
| 22 | Find the factorial of a large number. | [22-solution.cpp](solutions/22-solution.cpp) |
| 23 | Find the maximum product subarray. | [23-solution.cpp](solutions/23-solution.cpp) |
| 24 | Find the longest consecutive subsequence. | [24-solution.cpp](solutions/24-solution.cpp) |
| 25 | Find all elements occurring more than N/K times. | [25-solution.cpp](solutions/25-solution.cpp) |
| 26 | Maximum profit with at most two stock transactions. | [26-solution.cpp](solutions/26-solution.cpp) |
| 27 | Check whether one array is a subset of another. | [27-solution.cpp](solutions/27-solution.cpp) |
| 28 | Find a triplet whose sum equals X. | [28-solution.cpp](solutions/28-solution.cpp) |
| 29 | Calculate trapped rain water between blocks. | [29-solution.cpp](solutions/29-solution.cpp) |
| 30 | Chocolate distribution — minimize the difference among M packets. | [30-solution.cpp](solutions/30-solution.cpp) |

## Input conventions

The workbook gives problem descriptions, not one shared input format or sample I/O. Each standalone program reads the required values from standard input; see its comments/source for the input order. Generally, array tasks read N followed by N elements; two-array tasks read N and M then both arrays; tasks involving K, X or M read the corresponding parameter; interval merging reads N pairs; and the three-array task reads N, M and P followed by each array.

## Compile

```bash
g++ -std=c++17 -O2 -Wall -Wextra solutions/01-solution.cpp -o program
./program
```

## Workbook notes

- Problems 8 and 13 both describe the maximum-sum contiguous subarray; both are retained because they appear separately in the workbook.
- Problem 22 appears in the Array section but asks for the factorial of a large number; it is retained under this topic exactly as listed.
- Problem 6's statement asks for the count of the union, while its title also mentions intersection. The program reports the union count, union values, and intersection values.
- Problem 2 asks for minimum and maximum using few comparisons; the solution uses pairwise comparisons.

These are standalone C++17 practice programs, not platform-specific function signatures. No CodeChef acceptance status or fabricated screenshots are claimed.
