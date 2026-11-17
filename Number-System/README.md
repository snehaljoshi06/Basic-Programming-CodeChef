# Number System — Problem Solving Skills Lab

**Student:** Snehal Yogesh Joshi  
**PRN:** 202501110055  
**Class:** SY AIML  
**Batch:** B1  
**Language:** C++17  
**Topic:** 2 — Number System

This folder contains 26 separate C++ programs corresponding to the 26 Number System exercises in the supplied Problem_Solving_Skills_Lab workbook.

## Programs

| # | Exercise | Source |
|---:|---|---|
| 1 | Armstrong Number | [01-armstrong-number.cpp](solutions/01-armstrong-number.cpp) |
| 2 | Automorphic Number | [02-automorphic-number.cpp](solutions/02-automorphic-number.cpp) |
| 3 | Buzz Number | [03-buzz-number.cpp](solutions/03-buzz-number.cpp) |
| 4 | Circular Prime | [04-circular-prime.cpp](solutions/04-circular-prime.cpp) |
| 5 | Co-Prime Numbers | [05-coprime-numbers.cpp](solutions/05-coprime-numbers.cpp) |
| 6 | Number to Words | [06-number-to-words.cpp](solutions/06-number-to-words.cpp) |
| 7 | Duck Number | [07-duck-number.cpp](solutions/07-duck-number.cpp) |
| 8 | Factorial | [08-factorial.cpp](solutions/08-factorial.cpp) |
| 9 | Factors | [09-factors.cpp](solutions/09-factors.cpp) |
| 10 | Fibonacci Series for a Range | [10-fibonacci-range.cpp](solutions/10-fibonacci-range.cpp) |
| 11 | Floyd Triangle | [11-floyd-triangle.cpp](solutions/11-floyd-triangle.cpp) |
| 12 | GCD | [12-gcd.cpp](solutions/12-gcd.cpp) |
| 13 | Happy Numbers from Input | [13-happy-number.cpp](solutions/13-happy-number.cpp) |
| 14 | Harshad Number | [14-harshad-number.cpp](solutions/14-harshad-number.cpp) |
| 15 | LCM | [15-lcm.cpp](solutions/15-lcm.cpp) |
| 16 | Multiplication of Digits | [16-product-of-digits.cpp](solutions/16-product-of-digits.cpp) |
| 17 | Neon Number and Range | [17-neon-number.cpp](solutions/17-neon-number.cpp) |
| 18 | Niven Number | [18-niven-number.cpp](solutions/18-niven-number.cpp) |
| 19 | Palindrome Number | [19-palindrome-number.cpp](solutions/19-palindrome-number.cpp) |
| 20 | Ugly Number | [20-ugly-number.cpp](solutions/20-ugly-number.cpp) |
| 21 | Pronic Number | [21-pronic-number.cpp](solutions/21-pronic-number.cpp) |
| 22 | Magic Number | [22-magic-number.cpp](solutions/22-magic-number.cpp) |
| 23 | Tech Number | [23-tech-number.cpp](solutions/23-tech-number.cpp) |
| 24 | Disarium Number | [24-disarium-number.cpp](solutions/24-disarium-number.cpp) |
| 25 | Twisted Prime | [25-twisted-prime.cpp](solutions/25-twisted-prime.cpp) |
| 26 | Spy Number | [26-spy-number.cpp](solutions/26-spy-number.cpp) |

## Input formats

The workbook supplies descriptions but no sample input/output formats for this topic. The programs therefore use these simple formats:

- One integer: Armstrong, Automorphic, Buzz, Duck, Factorial, Factors, Harshad, Niven, Palindrome, Ugly, Pronic, Magic, Disarium, Twisted Prime and Spy.
- Two integers: Co-Prime and LCM.
- Number to Words: one integer from 0 to 999,999,999,999.
- Circular Prime: one integer token.
- Fibonacci range: lower and upper bounds; prints Fibonacci values in the inclusive range.
- Floyd Triangle: number of rows.
- GCD: count N followed by N integers.
- Happy Numbers: count N followed by N integers; prints happy values.
- Neon: number to test, then lower and upper bounds for listing neon values.

## Notes on workbook wording

- The workbook describes Niven and Harshad numbers with the same digit-sum divisibility property. Both are retained as separate exercises.
- The workbook's Magic Number description refers to a hard-coded programming literal, which is not a standard number-property definition. This implementation uses the common numeric interpretation: repeatedly sum digits until one digit remains; the number is considered magic if that digit is 1. Confirm the intended definition with your instructor if necessary.

## Compile

Compile one file at a time:

```bash
g++ -std=c++17 -O2 -Wall -Wextra solutions/01-armstrong-number.cpp -o program
./program
```

Each file has its own main() function and must be compiled separately. The factorial program uses the Boost Multiprecision header for large integer results.

**Build check:** All 26 source files compiled successfully using g++ with C++17, -O2, -Wall and -Wextra. Compilation confirms syntax/build compatibility, not CodeChef acceptance.
