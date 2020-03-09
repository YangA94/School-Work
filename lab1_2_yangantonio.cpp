//This program is for lab.1.2
//This program is created by Antonio Yang
#include <iostream>
#include <iomanip>
using namespace std;

//function main begins program execution
int main()

{
    //Variable declarations
    double  height,     //Height of fence
            length,     //Length of fence
            sqaureFeet, //Amount of sqaured feet measured
            gallons;    //Amount of gallons needed for entire fence
            
    //Ask user input for height and lenght
    cout << "What is the height and length of the fence?\n";
    cin >> height >> length;    //User input for height & length
    
    //Calculate the amount of gallons needed for the entire project
    sqaureFeet = height * length;   //Square feet calculation
    gallons = sqaureFeet/340;       //Gallons of paint calculation
    
    /*Display outcome of amount of paint needed for the 
    height and length of the fence*/
    cout << setprecision(2) << fixed << "A wooden fence that is " << height << " feet high and "
    << length << " feet long needs atleast " << gallons << " gallons of paint. to cover "
    << sqaureFeet << " square feet of fencing.";

    return 0;
    
} //end function main