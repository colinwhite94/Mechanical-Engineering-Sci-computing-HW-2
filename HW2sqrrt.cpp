/*
File name: HW 2 square root
Author: Colin White
Date; 13 may 2018
Description: This program asks if you want to take a square root.
It then asks for what number you want to take the square root of.
It finds the square root by adding powers of ten until the answer is too big
then it subtracts enough to get below the correct answer, and adds powers of
ten that are one order of magnitude smaller than the previous step.
 It then askes if you want to take another square root
*/

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    int z = 1; // this is the variable that indicates if you want to keep taking square roots
    while(z == 1)
    {
        double a = 0; // this is the input of the number we will take the square root ot
        double b = 0; // this is the number that will become the square root
        // the rest are variable that help me find the square root
        double c = 0; // 1000 place
        double d = 0; // 100 place
        double e = 0; // 10 place
        double f = 0; // 1 place
        double g = 0; // .1 place
        double h = 0; // .01 place
        double i = 0; // .001 place
        double j = 0; // .0001 place
        double k = 0; // .00001 place
        double l = 0; // .000001 place

        // ask user if they want to exit program or continue
        cout << "\nWould you like to take a square root?\nPress 1 for yes, anything else for no\n";
        cin >> z;
        // gets number to take square root of
        cout << "Lets take a square root\ninput a number" << endl;
        cin >> a;

        // each while loop from here is the same and keeps adding numbers to b in its respective tens place until b*b is bigger than a
        while (a > c) {
            c = b * b;
            b = b + 1000;
        }
        //this is to "reindex b" due to the nature of how the while loop adds, it has added 2 too many powers of ten
        b = b - 2000;

        while (a > d) {
            d = b * b;
            b = b + 100;
        }
        b = b - 200;

        while (a > e) {
            e = b * b;
            b = b + 10;
        }
        b = b - 20;

        while (a > f) {
            f = b * b;
            b = b + 1;
        }
        b = b - 2;

        while (a > g) {
            g = b * b;
            b = b + .1;
        }
        b = b - .2;

        while (a > h) {
            h = b * b;
            b = b + .01;
        }
        b = b - .02;

        while (a > i) {
            i = b * b;
            b = b + .001;
        }
        b = b - .002;

        while (a > j) {
            j = b * b;
            b = b + .0001;
        }
        b = b - .0002;

        while (a > k) {
            k = b * b;
            b = b + .00001;
        }
        b = b - .00002;

        while (a > l) {
            l = b * b;
            b = b + .000001;
        }
        b = b - .000002;

        cout << "the square root of " << fixed << showpoint << setprecision(5) << a << " is " << b << "\n";
    }

return 0;
}