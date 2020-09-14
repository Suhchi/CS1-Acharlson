/* Triangle Assignment 2
Date: 9/13
By: Aubrey Charlson
CSCI 111

The triangle program's purpose will be to find the area, and perimeter of a circle based on 3 given sides

*/

#include <iostream>
//Common in/out Library
#include <string>
//Adds string Library
#include <cmath>
//Adds complex math Library
#include <iomanip>
//Adds Library for output precision

using namespace std;
//Resolving cin,cout


int main() 
{
    // Stating the main executable

    const double pi = 3.14159;
    // setting pi constant

    double area = 0, side1 = 0, side2 = 0, side3 =0, perim = 0, s = 0;
    // setting base string values

    string name = "Anon";
    //place holder for name value

    cout <<"Hello, welcome to the Triangle program! What is your name?"<< endl;
    getline(cin, name);
    //getting the username input

    cout <<"\nWelcome "<< name << "! This program will calulate the perimeter and area of a triangle."<< endl;
    cout <<"\nAll we need from you are the values for each side."<< endl;
    cout <<"Please enter 3 values, each seperated by a space, then press enter."<< endl;
    cin >> side1, cin >> side2, cin >> side3;
    // greeting user and collecting side data

    perim = side1 + side2 + side3;
    // calculating and saving perimeter value
    cout << "Side lengths are (a,b,c):\t" << fixed << setprecision(6) << side1 << ", " << side2 << ", " << side3 << endl;
    cout << "The perimeter is:\t\t" << perim << endl;

    // to find the area we will be using heron's formula since we know all three side lengths
    //Heron's Formula: S = (a + b + c)/2, Area = root(s(s-b)(s-c)(s-a))
    s = (side1 + side2 + side3)/2 ;
    area = sqrt(s*(s-side1)*(s-side2)*(s-side3));
    // calculating and saving area
    cout <<"The area is:    \t\t"<< area << endl;
    cout <<"\n\n Press enter to exit..." << endl;

    cin.ignore(1000,'\n');
    cin.get();

    return 0;
}