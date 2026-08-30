# CGPA Calculator (C++)
A console-based CGPA Calculator built in C++ . It calculates semester-wise GPA and an overall CGPA based on course grades and credit hours.

## Live Demo
Try it online without installing anything: 
 https://shamaim-dev.github.io/CGPA-Calculator/
## Features
- Supports multiple semesters in a single run
- Takes course grades (letter grades) and credit hours as input
- Validates grade input (re-prompts on invalid entry)
- Calculates individual course grade points
- Calculates semester-wise GPA
- Calculates overall CGPA across all semesters
- Displays a clean result table for each semester

## Grading Scale Used
| Grade | Grade Points |
|-------|-------------|
| A+ / A | 4.0 |
| A-    | 3.7 |
| B+    | 3.3 |
| B     | 3.0 |
| B-    | 2.7 |
| C+    | 2.3 |
| C     | 2.0 |
| C-    | 1.7 |
| D+    | 1.3 |
| D     | 1.0 |
| F     | 0.0 |

## Tools & Requirements
- Language: C++ (C++11 or later)
- Compiler: g++ (MinGW / GCC)
- IDE Used: Dev-C++

## How to Run

### Command Line
```bash
g++ GPA.cpp -o GPA -std=c++11
./GPA
```

## Author
Developed by **Shamaim **student of Computer Sceience.
