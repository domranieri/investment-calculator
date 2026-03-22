# C++ Investment Calculator

A console based application that calculates investment growth over time, with and without monthly deposits. Enter an initial investment, monthly contribution, annual interest rate, and number of years to generate formatted yearly balance and interest reports

---

## How to Build & Run

### Visual Studio (Windows)
1. Create a new **Empty Project**
2. Add `main.cpp`, `BankingApp.cpp`, and `BankingApp.h` to the project
3. Set **C++ Language Standard** to C++11 or later *(Project → Properties → C/C++ → Language)*
4. Build and run

---

## Example Output

```
================================================
     Banking Investment Calculator
================================================

Initial Investment Amount ($): 1000
Monthly Deposit ($):           100
Annual Interest Rate (%):      5
Number of Years:               3

Press Enter to see your results...

--------------------------------------------------
  Investment Parameters
--------------------------------------------------
  Initial Investment:  $   1000.00
  Monthly Deposit:     $    100.00
  Annual Interest:          5.00%
  Number of Years:             3
--------------------------------------------------

  Balance and Interest Without Monthly Deposits
==================================================
Year  Year End Balance    Year End Earned Interest
--------------------------------------------------
1     $       1050.00       $        50.00
2     $       1102.50       $        52.50
3     $       1157.63       $        55.13

  Balance and Interest With Monthly Deposits
==================================================
Year  Year End Balance    Year End Earned Interest
--------------------------------------------------
1     $       2282.37       $        82.37
2     $       3628.40       $       146.03
3     $       5042.57       $       214.17
```
