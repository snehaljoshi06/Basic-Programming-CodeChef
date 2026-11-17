# String — C++ Problem Solutions

**Student:** Snehal Yogesh Joshi  
**PRN:** 202501110055  
**Class:** SY AIML  
**Batch:** B1  
**Course:** Problem Solving Skills Lab  
**Topic:** 5 — String  
**Language:** C++17

This folder contains the 30 exercises listed under the **String** heading in the supplied Moodle Excel workbook, kept in their original order.

## Solutions

| # | Workbook problem title | Source |
|---:|---|---|
| 1 | Reverse a String | [01-reverse-a-string.cpp](solutions/01-reverse-a-string.cpp) |
| 2 | Check whether a String is Palindrome or not | [02-string-palindrome.cpp](solutions/02-string-palindrome.cpp) |
| 3 | Find duplicate characters in string | [03-duplicate-characters-count.cpp](solutions/03-duplicate-characters-count.cpp) |
| 4 | Why strings are immutable in Java? | [04-string-immutability.cpp](solutions/04-string-immutability.cpp) |
| 5 | Rotation check for matrix (description asks whether one string is a rotation of another) | [05-string-rotation.cpp](solutions/05-string-rotation.cpp) |
| 6 | Valid shuffle of two distinct strings | [06-valid-shuffle.cpp](solutions/06-valid-shuffle.cpp) |
| 7 | Count and Say problem | [07-count-and-say.cpp](solutions/07-count-and-say.cpp) |
| 8 | Longest palindromic Substring (the workbook description in this row refers to the count-and-say sequence) | [08-longest-palindromic-substring.cpp](solutions/08-longest-palindromic-substring.cpp) |
| 9 | Longest recurring subsequence in a string | [09-longest-repeating-subsequence.cpp](solutions/09-longest-repeating-subsequence.cpp) |
| 10 | All subsequences of string | [10-all-subsequences.cpp](solutions/10-all-subsequences.cpp) |
| 11 | Print all the permutations of the given string | [11-unique-permutations.cpp](solutions/11-unique-permutations.cpp) |
| 12 | Split binary string into two sub strings | [12-balanced-binary-substrings.cpp](solutions/12-balanced-binary-substrings.cpp) |
| 13 | Word Wrap Problem | [13-word-wrap.cpp](solutions/13-word-wrap.cpp) |
| 14 | EDIT Distance | [14-edit-distance.cpp](solutions/14-edit-distance.cpp) |
| 15 | Find next greater number with same set of digits | [15-next-greater-number-same-digits.cpp](solutions/15-next-greater-number-same-digits.cpp) |
| 16 | Balanced Parenthesis problem | [16-balanced-parentheses.cpp](solutions/16-balanced-parentheses.cpp) |
| 17 | Word break Problem | [17-word-break.cpp](solutions/17-word-break.cpp) |
| 18 | Rabin Karp Algorithm | [18-rabin-karp-search.cpp](solutions/18-rabin-karp-search.cpp) |
| 19 | KMP Algo — longest proper prefix which is also proper suffix | [19-kmp-longest-prefix-suffix.cpp](solutions/19-kmp-longest-prefix-suffix.cpp) |
| 20 | Convert sentence into equal mobile numeric keypad sequence | [20-mobile-keypad-sequence.cpp](solutions/20-mobile-keypad-sequence.cpp) |
| 21 | Minimum number of bracket reversals needed to make an expression balanced | [21-minimum-bracket-reversals.cpp](solutions/21-minimum-bracket-reversals.cpp) |
| 22 | Count All Palindromic Subsequences in a given String | [22-count-palindromic-subsequences.cpp](solutions/22-count-palindromic-subsequences.cpp) |
| 23 | Count of no. of given string in a 2D character array (four directions) | [23-find-string-in-2d-array-four-directions.cpp](solutions/23-find-string-in-2d-array-four-directions.cpp) |
| 24 | Search a Word in a 2D Grid of characters (eight directions) | [24-search-word-in-2d-grid-eight-directions.cpp](solutions/24-search-word-in-2d-grid-eight-directions.cpp) |
| 25 | Boyer Moore Algorithm | [25-boyer-moore-search.cpp](solutions/25-boyer-moore-search.cpp) |
| 26 | Converting Roman Numerals to Decimal | [26-roman-to-integer.cpp](solutions/26-roman-to-integer.cpp) |
| 27 | Longest Common Prefix | [27-longest-common-prefix.cpp](solutions/27-longest-common-prefix.cpp) |
| 28 | Number of flips to make binary string alternate | [28-minimum-flips-binary-string-alternate.cpp](solutions/28-minimum-flips-binary-string-alternate.cpp) |
| 29 | Find the first repeated word in string (description asks for second most repeated string) | [29-second-most-repeated-string.cpp](solutions/29-second-most-repeated-string.cpp) |
| 30 | Minimum number of swaps for bracket balancing | [30-minimum-adjacent-swaps-bracket-balancing.cpp](solutions/30-minimum-adjacent-swaps-bracket-balancing.cpp) |

## Input conventions

The workbook provides descriptions, but does not give a uniform input/output format or sample cases for these exercises. Each source file is a standalone console program. Unless otherwise clear from the task, the programs read the string(s), dimensions, dictionary size/words, or array/grid data from standard input. For line-based string tasks, enter the full string on its own line.

## Important workbook wording notes

Some workbook rows contain inconsistent or language-specific descriptions. They have not been silently rewritten:

- **Problem 4:** The title asks why strings are immutable in Java. This C++ exercise prints the language distinction: C++ `std::string` is mutable; Java `String` is immutable.
- **Problem 5:** The title says “Rotation check for matrix”, but the description asks whether one string is a rotation of another. The code follows the description and checks string rotation.
- **Problem 8:** The title says “Longest palindromic Substring”, while its description refers to the count-and-say sequence. The code follows the title and finds the longest palindromic substring. The count-and-say exercise is separately implemented in Problem 7.
- **Problem 23:** The description asks to find a string in a 2D character array in four directions; the code counts matches horizontally and vertically.
- **Problem 29:** The title says “first repeated word”, while the description asks for the second most repeated string. The code follows the description and prints the second most frequent distinct string. Ties are resolved alphabetically.
- **Problem 30:** The solution counts adjacent swaps needed to balance a string with equal numbers of opening and closing square brackets, as stated.

## Compile

Compile one file at a time:

```bash
g++ -std=c++17 -O2 -Wall -Wextra solutions/01-reverse-a-string.cpp -o program
./program
```

These are standalone C++17 practice programs. They do not claim CodeChef Accepted status, and no screenshots have been fabricated.
