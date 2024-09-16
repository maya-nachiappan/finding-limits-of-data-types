//
//  CIS25 - assignment 5
//
//  Created by maya nachiappan on 9/15/24.
//
// program to find the max and min limits of short and double data types

#include <iostream>
#include <limits>
using namespace std;
int main ()
{
    double dMin;
    double dMax;
    short sMin;
    short sMax;
    
    // for loop to manually get min value of short using overloading
    for (short i=-1; i<0; i--)
    {
        sMin=i;
    }
    // loop to get max value of short
    for (short i=1; i>0; i++)
    {
        sMax=i;
    }
    cout <<"The size of the short data type is: " << sizeof(short) << " bytes" << endl;
    cout << "The minimum value of the short data type is: " <<sMin << " and the maximum is: " << sMax << endl;
    

    cout << "The size of the double data type is: " << sizeof(double) <<" bytes" << endl;
    
    // find the max and min value of double using numeric limits
    cout<<  "The minimum value of a double data type is: " <<numeric_limits<double>::min() << " and the maximum value is: " << numeric_limits<double>::max()<< endl;
}

