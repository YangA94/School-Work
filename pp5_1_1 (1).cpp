//This program is pp5_1_1.cpp
//This program was made by Antonio yang
#include <iostream>
using namespace std;

int main()
{
    //Variables
    int number,
        square;
        
    //Declare number value
    number = 0;
        
    do
    {
        //Increment number value
        number++;
        
        //Calculate squared number.
        square = number * number;
        
    } while (square <= 800);
    
    //Display the squared number.
    cout << "The first lowest number to get above 800 is " << number << " with the result of "
    << square << ".\n";
    
    return 0;
}