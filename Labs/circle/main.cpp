/*
Circle Lab
By: Aubrey Charlson (FIXED)
CSCI 111
Date 9/9/2020

This program prompts the user to enter the radius of a circle.
It then calculates and displays its area and circumference.

Algorithm steps:
1. Prompt user to enter radius of a circle and store the radiys into a variable.
2. Calculate area useing the formula pi x radius^2 and store the value into a variable.
3. Calculate circumference using the formula pi x 2radius and store the value into a variable.
4. Output the calculated values for are and circumference.
*/

#include <iostream>
//library for common input, output and formatting
#include <string>
//library for string type
#include <cmath>
//library for pow and other math functions
#include <iomanip>
// library for output formatting: setprecision()

using namespace std;
//resolving cout cin, endl, etc.

int main()
{
    const double pi = 3.14159;
    //variables declared and initialized
    double radius=0, area=0, circumference=0;

    string name = "Anonymous"; 
    //variable to store username
    cout << "Hi there, what is your full name? ";
    getline(cin, name); //(Fixed)

    cout << "Nice meeting you " << name << "!" << endl;
    // Greets user, using their desired username

    cout << "\nProgram finds the area and cirumference of a circle with the given radius. \n\n";
    // display some information about this program to the user

    cout << name << ", please enter the radius of a circle: ";
    // prompt user to enter a radius
    cin >> radius;
    // reads input and stores it into the radius variable

    area= pi * pow(radius, 2);
    // Calculates the area = pi*(radius)^2 using the power function
    circumference = pi * radius * 2 ;
    // Calculates circumference using 2r * pi
    cout << "Your circle has the radius:    \t " << fixed << setprecision(6) << radius << endl;
    cout << "Your circle has the area:      \t " << area << '\n';
    cout << "Your circle's circumference is:\t " << circumference << endl;


    cout << "Good bye... \nHit enter to exit the program!" << '\n';
    cin.ignore(1000,'\n');
    cin.get();
    return 0;
}
