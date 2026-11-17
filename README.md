# Basic Programming — CodeChef Solutions

**Course:** Problem Solving Skills Lab  
**Topic:** 1 — Basic Programming  
**Language:** C++17  
**Source list:** The 30 problems under "Basic Programming" in the supplied course workbook.

This repository contains one independent C++17 solution for each of the 30 listed CodeChef exercises. Programs use standard input and output; enter input in the exact format shown on the linked CodeChef problem page.

## Repository structure

```text
.
├── README.md
├── PROBLEM_LIST.md
├── screenshots/
│   └── README.md
└── solutions/
    ├── 01-good-turn.cpp
    ├── 02-print-number.cpp
    ├── ...
    └── 30-count-words.cpp
```

## Solution index

| # | Problem | Problem page | C++ solution |
|---:|---|---|---|
| 1 | Good Turn | [GDTURN](https://www.codechef.com/problems/GDTURN) | [01-good-turn.cpp](solutions/01-good-turn.cpp) |
| 2 | Print a Number | [START01](https://www.codechef.com/problems/START01) | [02-print-number.cpp](solutions/02-print-number.cpp) |
| 3 | Add Two Numbers | [FLOW001](https://www.codechef.com/problems/FLOW001) | [03-add-two-numbers.cpp](solutions/03-add-two-numbers.cpp) |
| 4 | Exam Eligibility | [CSC02A](https://www.codechef.com/learn/course/cpp-beginner/BC00BC09/problems/CSC02A) | [04-exam-eligibility.cpp](solutions/04-exam-eligibility.cpp) |
| 5 | Tax Saving | [TAXSAVING](https://www.codechef.com/problems/TAXSAVING) | [05-tax-saving.cpp](solutions/05-tax-saving.cpp) |
| 6 | Unattempted Problems | [PRACLIST](https://www.codechef.com/problems/PRACLIST) | [06-unattempted-problems.cpp](solutions/06-unattempted-problems.cpp) |
| 7 | Maximum Burgers | [BURGERS](https://www.codechef.com/problems/BURGERS) | [07-maximum-burgers.cpp](solutions/07-maximum-burgers.cpp) |
| 8 | Ludo | [LUDO](https://www.codechef.com/problems/LUDO) | [08-ludo.cpp](solutions/08-ludo.cpp) |
| 9 | Office Walking Distance | [FIT](https://www.codechef.com/problems/FIT) | [09-office-walking-distance.cpp](solutions/09-office-walking-distance.cpp) |
| 10 | Biryani Class Cost | [BIRYANI](https://www.codechef.com/problems/BIRYANI) | [10-biryani-class-cost.cpp](solutions/10-biryani-class-cost.cpp) |
| 11 | Water Consumption | [WATERCONS](https://www.codechef.com/problems/WATERCONS) | [11-water-consumption.cpp](solutions/11-water-consumption.cpp) |
| 12 | Determine Score | [DETSCORE](https://www.codechef.com/problems/DETSCORE) | [12-determine-score.cpp](solutions/12-determine-score.cpp) |
| 13 | IPL Tickets | [IPLTRSH](https://www.codechef.com/problems/IPLTRSH) | [13-ipl-tickets.cpp](solutions/13-ipl-tickets.cpp) |
| 14 | Kitchen Time | [KITCHENTIME](https://www.codechef.com/problems/KITCHENTIME) | [14-kitchen-time.cpp](solutions/14-kitchen-time.cpp) |
| 15 | Taxes | [TAXES](https://www.codechef.com/problems/TAXES) | [15-taxes.cpp](solutions/15-taxes.cpp) |
| 16 | Audible Frequency | [AUDIBLE](https://www.codechef.com/problems/AUDIBLE) | [16-audible-frequency.cpp](solutions/16-audible-frequency.cpp) |
| 17 | Timely Arrival | [TIMELY](https://www.codechef.com/problems/TIMELY) | [17-timely-arrival.cpp](solutions/17-timely-arrival.cpp) |
| 18 | Taller | [TALLER](https://www.codechef.com/problems/TALLER) | [18-taller.cpp](solutions/18-taller.cpp) |
| 19 | Reach Target | [REACHTARGET](https://www.codechef.com/problems/REACHTARGET) | [19-reach-target.cpp](solutions/19-reach-target.cpp) |
| 20 | King Tour | [KNGTOR](https://www.codechef.com/problems/KNGTOR) | [20-king-tour.cpp](solutions/20-king-tour.cpp) |
| 21 | My First Contest | [MY1STCONTEST](https://www.codechef.com/problems/MY1STCONTEST) | [21-my-first-contest.cpp](solutions/21-my-first-contest.cpp) |
| 22 | Best of Two | [BESTOFTWO](https://www.codechef.com/problems/BESTOFTWO) | [22-best-of-two.cpp](solutions/22-best-of-two.cpp) |
| 23 | Minimum Height | [MINHEIGHT](https://www.codechef.com/problems/MINHEIGHT) | [23-minimum-height.cpp](solutions/23-minimum-height.cpp) |
| 24 | CodeChef Learn | [CCLEARN](https://www.codechef.com/problems/CCLEARN) | [24-codechef-learn.cpp](solutions/24-codechef-learn.cpp) |
| 25 | Chef Brain Speed | [CBSPEED](https://www.codechef.com/problems/CBSPEED) | [25-chef-brain-speed.cpp](solutions/25-chef-brain-speed.cpp) |
| 26 | Candy Divide | [CANDIVIDE](https://www.codechef.com/problems/CANDIVIDE) | [26-candy-divide.cpp](solutions/26-candy-divide.cpp) |
| 27 | Chef on Date | [CHEFONDATE](https://www.codechef.com/problems/CHEFONDATE) | [27-chef-on-date.cpp](solutions/27-chef-on-date.cpp) |
| 28 | PAR2 | [PAR2](https://www.codechef.com/problems/PAR2) | [28-par2.cpp](solutions/28-par2.cpp) |
| 29 | Prize Pool | [PRIZEPOOL](https://www.codechef.com/problems/PRIZEPOOL) | [29-prize-pool.cpp](solutions/29-prize-pool.cpp) |
| 30 | Count Words | [CNTWRD](https://www.codechef.com/problems/CNTWRD) | [30-count-words.cpp](solutions/30-count-words.cpp) |

## Compile and run

Compile an individual file using a C++17 compiler:

```bash
g++ -std=c++17 -O2 -Wall -Wextra solutions/01-good-turn.cpp -o solution
./solution
```

Every source file is a separate program. Do not combine all 30 files into one executable because each has its own `main()` function.

## Submission screenshots

The `screenshots/` folder is reserved for genuine screenshots from your CodeChef account after you submit each corresponding program. No acceptance screenshots are fabricated or included. Follow the current Moodle instructions for capturing and compiling your evidence PDF.

## Before submitting

These are reference implementations based on the workbook problem descriptions. Check each linked CodeChef page for its exact input format and current constraints, then run the sample tests and submit your own solution to CodeChef. A source file in this repository is not, by itself, proof of an accepted CodeChef submission.


## Topic 2 — Number System

The separate Number System assignment contains 26 C++17 programs from the same course workbook. Open the [Number-System folder](Number-System/) for its README, problem list, and individual solutions. This topic is kept separate from the 30 Basic Programming exercises above.
