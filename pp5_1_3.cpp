//This program is to identify ranking of schools by tiers.
#include <iostream>
using namespace std;

int main()

{

    //Variables.
    int user_input;
    
    //New line for good visuals
    cout << "\n";
    
    //Ask the user to input a school rank.
    cout << "What is the rank of the school you want to enter?\n";

    //User input for rank.
    cin >> user_input;
    
    //Calculate tiering structure.
    if (user_input <= 100)
        cout << "The school rank you entered is Tier 1.\n";
        
    else if (user_input >= 101 && user_input <= 200)
        cout << "The school rank you entered is Tier 2.\n";
    
    else if (user_input > 200)
        cout << "The school rank you entered is Tier 3.\n";
        
    else
        cout << "That is not a valid input.\n";
    
    return 0;
}