#include "../include/Employee.h"
#include <iostream>
using namespace std;


Employee::Employee(string name, int payroll_number, string department, float daily_salary): 
    name(name), payroll_number(payroll_number), department(department), daily_salary(daily_salary){}

void Employee::displayEmployee() const{
    cout << "--------------------------------------" << endl;
    cout << "Name: " << name << endl;
    cout << "Payroll Number: " << payroll_number << endl;
    cout << "Department: " << department << endl;
    cout << "Daily Salary: " << daily_salary << endl;
    cout << "--------------------------------------" << endl;
}

float Employee::calculateBiWeeklySalary(int daily_income) const{
    return daily_income * 14;
}

float Employee::calculateBiWeeklyTaxes(int daily_income) const{
    float biweekly_salary = calculateBiWeeklySalary(daily_income);
    if(biweekly_salary < 8000){
        return biweekly_salary * 0.12;
    }else if(biweekly_salary >= 8000 && biweekly_salary < 15000){
        return biweekly_salary * 0.20;
    }else{
        return biweekly_salary * 0.34;
    }
}

float Employee::calculateBiWeeklyNetSalary(int daily_income) const{
    return calculateBiWeeklySalary(daily_income) - calculateBiWeeklyTaxes(daily_income);
}

// Path: src/main.cpp