/*
File name: HW 2; machine epsilon
Author: Colin White
Date; 13 may 2018
Description: this program helps you experiment to find the machine epsilon
by allowing you to choose progressively smaller numbers and see if the value
of 1 if significantly changed by adding that number to 1. dx is the number you input,
x is equal to 1+dx.
 */

#include<iostream>
using namespace std;

int main()
{
    float dx = 0;  //input vriable
    float x = 0;  //output variable
    int z = 1;  //while loop indicator
    cout.setf(ios::fixed); //helps output the right amount of decimal points
    cout.setf(ios::showpoint); //helps output the right amount of decimal points
    cout.precision(24); //helps output the right amount of decimal points

    while(z==1) //allows you to quickly try many dx values
    {
        cout << "\nlets find machine epsilon\nenter a very small number\n";
        cin >> dx; //input your guess
        x = 1 + dx; //add you guess to 1 and see if it significalty changes the output
        cout << x << " " << dx << endl; //the out put
        cout << "would you like to go again?\nEnter 1 for yes, 2 for not\n";
        cin >> z; //this variable decides if the program will run again
    }
    cout << "you have exited the program";
    return 0;
}