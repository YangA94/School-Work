//This program is chap4_pp_4
//Created by Antonio Yang
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    //New line for spacing
    cout << endl;
    
    //Variables
    double  b,		//First numeric variable
            c,		//Second numeric variable
            pi;		//Pie (3.14)
    
    //Declare variables
    b = 3;			//Numerical variable
    c = 5;			//Numerical variable
    pi = 3.14;		//Pie
    
    //Display variables
    cout << "b=" << b << ", c=" << c << ", pi=" << pi << endl;
    
    //Display first equation
	cout << "a=4bc+14\n";   //Equation
	
	//Calculate first equation
    cout << "a=" << 4 * b * c + 14 << endl;     //Math calcuation
    
    //New line for spacing
    cout << endl;
    
    //Display second equation
	cout << "a=pi*b^2\n";   //Equation
	
	//Calculate second equation
    cout << "a=" << pi * pow(b,2) << endl;      //Math calcuation
    
    //New line for spacing
    cout << endl;
   
    //Display third equation
	cout << "a=b^2/c^2\n";  //Equation
	
	//Calculate third equation
    cout << "a=" << pow(b,2) / pow(c,2) << endl;    //Math calcuation
    
    return 0;
}