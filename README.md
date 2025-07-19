# 📆 DateMaster

**DateMaster** is a powerful, all-in-one C++ library for handling dates and calendar-related operations. It provides a wide range of utilities for date manipulation, comparison, formatting, and calendar display — making it a great fit for personal, academic, or enterprise-level C++ projects.

---

## 🚀 Features

✅ Construct dates from string, day-order, or system time  
✅ Add or subtract days, weeks, months, years, centuries, millennia  
✅ Leap year checks, date validation  
✅ Compare two dates: before, after, equal  
✅ Calculate business days, weekend logic  
✅ Calendar printing (month/year view)  
✅ Get short or full names of days and months  
✅ Format dates using patterns (`dd/mm/yyyy`, etc.)  
✅ Calculate age, vacation return date, time units in year/month  
✅ Fully static and instance-based methods for flexibility  

---

## 🧱 Class Structure

- `clsDate`: Main class with constructors and member variables
- Methods include:
  - `increasedatebyoneday()`
  - `getdiffindays()`
  - `printmonthcalender()`
  - `thedayyoubrithname()`
  - `formatdate("dd/mm/yyyy")`
  - `isweekend()`, `isbussinessday()`
  - and many more...

---

## 🛠️ Usage Example

```cpp
#include <iostream>
#include "clsDate.h"
using namespace std;

int main() {
    clsDate today;
    today.print();  // prints current system date

    clsDate birthday("15/08/2000");
    cout << "You were born on a " << birthday.thedayyoubrithname() << endl;

    clsDate future = clsDate::increasedatebyxyear(birthday, 5);
    future.print();  // date after 5 years

    clsDate::printmonthcalender(7, 2025); // prints July 2025
}
```