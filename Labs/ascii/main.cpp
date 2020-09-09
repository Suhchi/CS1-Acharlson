/*
    ASCII Lab
    ASCII Art and Standard Input/Ouput
    
    Updated By: Aubrey FIXED
    Date: 9/3 #FIXED
    
    This program produces an ASCII art on the console.
    Algorithm steps: 
    1. Write a series of cout statements to print the ASCII art.
*/

#include <iostream>
#include <string>
//library for input & output
using namespace std;
// resolving cout, cin and endl statements
// main entry of program
int main()
{
    string name; // variable to store username
    cout <<"Hi there, whats your desired username?\t";
    getline(cin,name);
    cout <<"Nice to meet you, " << name << "!" << endl;
    cout << "Hope you like my tom and Jerry ASCII art...\n\n";

    cout <<"   |\\_/|   ******************     (\\_/)" << endl;
    cout <<"  / @ @ \\   *    ASCII Lab   *   (=\'.\'=)" << endl;
    cout <<" (>  0  <)  *    By: Aubrey  *  ('')_('')" << endl;
    cout <<"   >>x<<    *    CSCI 111    *" << endl;
    cout <<"   / O \\    ******************" << endl;
    
    /* Fixed: print the thirdline
                        fouthline
                        finalline*/

    cout << "\nGoodbye... (hit enter to exit the program: " <<'\n';
    cin.get();
    return 0;
}


