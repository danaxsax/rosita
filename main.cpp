#include <iostream>
#include "include/Person.h"
#include "include/Employee.h"

int main(){
    Employee employee("John Doe", 12345, "IT", 1000.0);

    employee.displayEmployee();
    std::cout << "Biweekly Salary: " << employee.calculateBiWeeklySalary(1000) << std::endl;
    std::cout << "Biweekly Taxes: " << employee.calculateBiWeeklyTaxes(1000) << std::endl;
    std::cout << "Biweekly Net Salary: " << employee.calculateBiWeeklyNetSalary(1000) << std::endl;

    return 0;
}