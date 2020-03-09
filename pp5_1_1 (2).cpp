//This program is an example of factoring multiplication
//Ask for programming practice in pp5_1_1 chapter 5, pg 73.
#include <iostream>
using namespace std;

int main()
{
    //Spacing for looks
    cout << "\n";
    
    //Variables
    int i,
        j;
    
    //Start loop
    for (int i = 1; i<=12; i++)
        {
            int result = 1;
            
            for (int j = 1; j<=i; j++)
                {
                    result = result * j;
                }
            cout << i << " != " << result << endl;
        }

    return 0;
}
