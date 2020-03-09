//Program to compute Paul's payment.
#include <iostream>
using namespace std;

//function main begins program execution
int main()

{

    //variable declarations
    double  basic_wage,
            basic_salary,
            overtime_salary,
            total_salary,
            workTime,
            overtime_hours,
            overtime_wage,
            total_hours,
            experience,
            non_overtime;
    
    //Define hourly pay
    basic_wage = 7.5;
    
    //Define overtime_salary
    overtime_wage = 8.5;
    
    //Input a number from keyboard and assign it to workTime
    cout << "How many hours did Paul work at the resturant today?\n";
    cin >> workTime;
    
    //Input years of experience for Paul
    cout << "How many year(s) has Paul worked at this resturant?\n";
    cin >> experience;
    
    //Calculate overtime_hours
    if (workTime < 9)
    {
        overtime_hours = 0;
    }
    else
    {
        if (experience > 2)
        overtime_wage = 10;
        overtime_hours = workTime - 8;
    }
        
    //Calculate the total hours worked
    non_overtime = workTime - overtime_hours;
    total_hours = non_overtime + overtime_hours;
    
    //Calculate the wage of hours worked
    basic_salary = non_overtime * basic_wage;
    overtime_salary = overtime_hours * overtime_wage;
    total_salary = basic_salary + overtime_salary;
    
    
    //Display hours worked, and salary.
    cout << "The number of hours Paul worked is " << total_hours
    << " hours. " << non_overtime << " hours of non-overtime and " << overtime_hours << " hours of overtime.\n";
    
    cout << "With " << total_hours << " hours worked, he has earned $" << basic_salary
    << " of normal pay and $" << overtime_salary << " of overtime pay. Totalling $"
    << total_salary << " worth of (non-taxed)\n pay today!\n";
    
    return 0;
    
}