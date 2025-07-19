#include <iostream>
#include "clsDate.h"
using namespace std;
int main()
{
    clsDate date1;
    date1.print();
   clsDate date2("12/10/2030");
   date2.print();
   clsDate date3(11, 1, 2026);
   date3.print();
   clsDate date4(200, 2024);
   date4.print();

}
