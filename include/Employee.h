#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <iostream>

class Employee{
    public:
        Employee(std::string name, int payroll_number, std::string department, float daily_salary);

        void displayEmployee() const;

        float calculateBiWeeklySalary(int daily_income) const;
        float calculateBiWeeklyTaxes(int daily_income) const;
        float calculateBiWeeklyNetSalary(int daily_income) const;
        
    private:
        std::string name;
        int payroll_number;
        std::string department;
        float daily_salary;
};

#endif