//
//  CIS25 - assignment 5
//
//  Created by maya nachiappan on 9/15/24.
//
// program to find the max and min limits of short and double data types

#include <iostream>
using namespace std;
int main ()
{
    double dMin;
    double dMax;
    short sMin;
    short sMax;
    
    // for loop to get min value of short using overloading
    for (short i=-1; i<0; i--)
    {
        sMin=i;
    }
    // loop to get max value of short
    for (short i=1; i>0; i++)
    {
        sMax=i;
    }
    cout << "The minimum value of a short data type is: " <<sMin << " and the maximum is: " << sMax << endl;
    
    // loop to get min value of double
    for (double i=-1; i<0; i--)
    {
        dMin=i;
    }
    
    // loop to get max value of double
    for (double i=1; i>0; i++)
    {
        dMax=i;
    }
    cout<<  "The minimum value of a double data type is: " <<dMin << " and the maximum value is: " << dMax << endl;
}

