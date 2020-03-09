//This program is to determine driving age eligibility.
#include <iostream>
#include <iomanip>
using namespace std;

int main()

{

    //Age variable.
    int age,
        remainingAge;
    
    //New line for good visuals
    cout << "\n";

    //Display output age question.
    cout << "What is your age?\n";
    
    //Display user input for age.
    cin >> age;

    //Calculate remainingAge.
    remainingAge = 17 - age;

    //If/else for 17 years old.
    if  (age <= 17)
        cout << "You still need to wait " << remainingAge << " years.\n";
    
    else
        cout << "You are eligible for driving.\n";
    
    return 0;
}