//This program is chap4_pp_1
//Created by Antonio Yang
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    //New line for spacing
    cout << endl;
    
    //Variables
    double  finput,
            cinput;
    
    //Ask user for Fahrenheit temperature
    cout << "What is the temperature of Fahrenheit you want to convert into Celcius?\n"; //User input
    cin >> finput;
    
    //Calculation of Celcius
    cinput = (5.0 / 9.0) * (finput - 32.0);
    
    cout << fixed << setprecision(1) << "The temperature from " << finput << " degrees Fahrenheit is "
    << cinput  << " degrees Celcius.\n";
    
    return 0;
}