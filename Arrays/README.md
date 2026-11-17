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
| 1 | Reverse the given array or string. | [01-reverse-array.cpp](solutions/01-reverse-array.cpp) |
| 2 | Find maximum and minimum with minimum comparisons. | [02-min-max-array.cpp](solutions/02-min-max-array.cpp) |
| 3 | Find the Kth smallest element (all elements distinct). | [03-kth-smallest.cpp](solutions/03-kth-smallest.cpp) |
| 4 | Sort an array containing only 0s, 1s and 2s without a sorting algorithm. | [04-sort-012.cpp](solutions/04-sort-012.cpp) |
| 5 | Move negative numbers to the beginning and positive numbers to the end with constant extra space. | [05-move-negative-numbers.cpp](solutions/05-move-negative-numbers.cpp) |
| 6 | Find the union and intersection of two sorted arrays. | [06-union-intersection.cpp](solutions/06-union-intersection.cpp) |
| 7 | Cyclically rotate an array by one position. | [07-cyclic-rotate-by-one.cpp](solutions/07-cyclic-rotate-by-one.cpp) |
| 8 | Find the maximum sum of a contiguous subarray. | [08-largest-sum-contiguous-subarray.cpp](solutions/08-largest-sum-contiguous-subarray.cpp) |
| 9 | Minimize the maximum difference between tower heights after adding or subtracting K. | [09-minimize-height-difference.cpp](solutions/09-minimize-height-difference.cpp) |
| 10 | Find the minimum number of jumps to reach the end. | [10-minimum-jumps.cpp](solutions/10-minimum-jumps.cpp) |
| 11 | Find the duplicate without modifying the array and using constant extra space. | [11-find-duplicate.cpp](solutions/11-find-duplicate.cpp) |
| 12 | Merge two sorted arrays without extra space. | [12-merge-sorted-arrays-no-extra-space.cpp](solutions/12-merge-sorted-arrays-no-extra-space.cpp) |
| 13 | Kadane's Algorithm — maximum subarray sum. | [13-kadanes-algorithm.cpp](solutions/13-kadanes-algorithm.cpp) |
| 14 | Merge overlapping intervals. | [14-merge-intervals.cpp](solutions/14-merge-intervals.cpp) |
| 15 | Find the next permutation in place. | [15-next-permutation.cpp](solutions/15-next-permutation.cpp) |
| 16 | Count inversions in an array. | [16-inversion-count.cpp](solutions/16-inversion-count.cpp) |
| 17 | Best time to buy and sell stock once. | [17-best-time-to-buy-sell-stock.cpp](solutions/17-best-time-to-buy-sell-stock.cpp) |
| 18 | Count pairs whose sum equals K. | [18-count-pairs-with-sum-k.cpp](solutions/18-count-pairs-with-sum-k.cpp) |
| 19 | Find common elements in three sorted arrays. | [19-common-elements-three-sorted-arrays.cpp](solutions/19-common-elements-three-sorted-arrays.cpp) |
| 20 | Rearrange positive and negative numbers alternately, preserving order. | [20-alternate-positive-negative.cpp](solutions/20-alternate-positive-negative.cpp) |
| 21 | Check whether a subarray with sum zero exists. | [21-subarray-with-zero-sum.cpp](solutions/21-subarray-with-zero-sum.cpp) |
| 22 | Find the factorial of a large number. | [22-factorial-of-large-number.cpp](solutions/22-factorial-of-large-number.cpp) |
| 23 | Find the maximum product subarray. | [23-maximum-product-subarray.cpp](solutions/23-maximum-product-subarray.cpp) |
| 24 | Find the longest consecutive subsequence. | [24-longest-consecutive-subsequence.cpp](solutions/24-longest-consecutive-subsequence.cpp) |
| 25 | Find all elements occurring more than N/K times. | [25-elements-more-than-n-by-k.cpp](solutions/25-elements-more-than-n-by-k.cpp) |
| 26 | Maximum profit with at most two stock transactions. | [26-max-profit-two-transactions.cpp](solutions/26-max-profit-two-transactions.cpp) |
| 27 | Check whether one array is a subset of another. | [27-array-subset-of-another.cpp](solutions/27-array-subset-of-another.cpp) |
| 28 | Find a triplet whose sum equals X. | [28-triplet-sum.cpp](solutions/28-triplet-sum.cpp) |
| 29 | Calculate trapped rain water between blocks. | [29-trapping-rain-water.cpp](solutions/29-trapping-rain-water.cpp) |
| 30 | Chocolate distribution — minimize the difference among M packets. | [30-chocolate-distribution.cpp](solutions/30-chocolate-distribution.cpp) |

## Input conventions

The workbook gives problem descriptions, not one shared input format or sample I/O. Each standalone program reads the required values from standard input; see its comments/source for the input order. Generally, array tasks read N followed by N elements; two-array tasks read N and M then both arrays; tasks involving K, X or M read the corresponding parameter; interval merging reads N pairs; and the three-array task reads N, M and P followed by each array.

## Compile

```bash
g++ -std=c++17 -O2 -Wall -Wextra solutions/01-reverse-array.cpp -o program
./program
```

## Workbook notes

- Problems 8 and 13 both describe the maximum-sum contiguous subarray; both are retained because they appear separately in the workbook.
- Problem 22 appears in the Array section but asks for the factorial of a large number; it is retained under this topic exactly as listed.
- Problem 6's statement asks for the count of the union, while its title also mentions intersection. The program reports the union count, union values, and intersection values.
- Problem 2 asks for minimum and maximum using few comparisons; the solution uses pairwise comparisons.

These are standalone C++17 practice programs, not platform-specific function signatures. No CodeChef acceptance status or fabricated screenshots are claimed.
