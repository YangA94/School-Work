//This program is chap4_pp_3
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
    double  area,       //area
            width,      //width
            length;     //length
    
    //Ask user for area of rectangle
    cout << "Enter the area of the rectangle.\n";   //User input area
    cin >> area;
    
    //Ask user for width of rectangle
    cout << "Enter the width of the rectangle.\n";   //User input for width
    cin >> width;
    
    //Calculation of length
    length = area/width;    //Divide area with width to find the length variable
    
    //Display missing length variable
    cout << fixed << setprecision(2) << "The missing length is "  << length << " feet.\n";
    
    return 0;
}