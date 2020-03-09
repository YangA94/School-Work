//This program is chap4_pp_2
//Created by Antonio Yang
#include <iostream>
using namespace std;

int main()
{
    //New line for spacing
    cout << endl;
    
    //Variables
    char     letter;     //letter of input
    
    //Ask user input a single letter
    cout << "Enter a single letter to see its ASCII code.\n";
    cin >> letter;
    
    //Display user inputed letter to ASCII number
    cout << "The ASCII code for "  << letter << " is " << (int)letter << " .\n";
    
    return 0;
}