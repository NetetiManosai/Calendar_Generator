# Calendar Generator C++

![C++](https://img.shields.io/badge/C++-Programming-blue) ![Calendar](https://img.shields.io/badge/Calendar-Generator-green) 

This project is a **C++ program** that generates a calendar for any given year. It dynamically calculates the days of the week, accounts for leap years, and displays the calendar in a clean, formatted output. This project demonstrates my proficiency in **C++ programming**, **algorithm design**, and **problem-solving**.

---

## Features

- **Leap Year Support**: Accurately identifies leap years and adjusts the number of days in February.
- **Dynamic Input**: Accepts any valid year as input and generates the corresponding calendar.
- **Formatted Output**: Displays the calendar in a user-friendly format with proper spacing and alignment.
- **Zeller's Congruence Algorithm**: Uses a mathematical formula to determine the day of the week for January 1st of the given year.
- **Modular Code**: Functions are well-organized and reusable, showcasing clean coding practices.

---

## How It Works

1. **Leap Year Calculation**: The program checks if the given year is a leap year using the rule:
   - A year is a leap year if it is divisible by 4 but not by 100, unless it is also divisible by 400.

2. **Days in Month Calculation**: The program calculates the number of days in each month, accounting for leap years in February.

3. **First Day of the Year**: Using Zeller's Congruence, the program determines the day of the week for January 1st of the given year.

4. **Calendar Display**: The program prints the calendar month-by-month, aligning the days of the week correctly.

---

## Code Structure

- **`isLeapYear(int year)`**: Checks if a year is a leap year.
- **`daysInMonth(int month, int year)`**: Returns the number of days in a given month and year.
- **`firstDayOfYear(int year)`**: Calculates the day of the week for January 1st of the given year.
- **`printCalendar(int year)`**: Prints the calendar for the given year in a formatted manner.
- **`main()`**: Handles user input and calls the `printCalendar` function.

---

## Usage

### Prerequisites
- A C++ compiler (e.g., `g++`).
- Basic knowledge of running C++ programs.

### Steps to Run the Program
1. Clone the repository:
   ```bash
   git clone https://github.com/your-username/calendar-generator.git
   cd calendar-generator
   ```

2. Compile the program:
   ```bash
   g++ calendar.cpp -o calendar
   ```

3. Run the program:
   ```bash
   ./calendar
   ```

4. Enter the year when prompted:
   ```
   Enter the year: 2024
   ```

5. View the generated calendar for the specified year.

---

## Example Output

For the year **2024**, the program will generate the following output:

```
Calendar for the year 2024:

  ------------ January -------------
  Sun  Mon  Tue  Wed  Thu  Fri  Sat
         1    2    3    4    5    6
     7    8    9   10   11   12   13
    14   15   16   17   18   19   20
    21   22   23   24   25   26   27
    28   29   30   31

  ------------ February -------------
  Sun  Mon  Tue  Wed  Thu  Fri  Sat
                     1    2    3
     4    5    6    7    8    9   10
    11   12   13   14   15   16   17
    18   19   20   21   22   23   24
    25   26   27   28   29
...
