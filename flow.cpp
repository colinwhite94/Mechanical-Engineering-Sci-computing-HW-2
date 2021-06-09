/*Author: Colin White
Date; 13 may 2018
Description: This is a flow control practice. There are 10 questions and 12 outcomes
*/
#include <iostream>
using namespace std;

int main()
{
    int a = 0;
    int b = 0;
    cout << "Are you tired, bored, or hungry, choose a case 1, 2, or 3 respectively";
    int i = 0;
    cout << "\n";
    cin >> i;

    //beginning of switch statement
    switch(i) {
        case 1 :
            cout << "You are tired\nDid you sleep last night?\nType 1 for yes, 2 for no\n";
            cin >> a;
            if(1==a)
            {
                cout << "You did sleep last night\nDid you exercise yesterday?\nType 1 for yes, 2 for no\n";
                cin >> a;
                if (1==a)
                {
                    cout << "you might need to eat better in order to sleep better";
                }
                else
                {
                    cout << "exercising more might help you sleep better";
                }

            }
            else
            {
                cout << "You did not sleep last night\nCan you go to sleep now?\nType 1 for yes, 2 for no\n";
                cin >> a;
                if (1==a)
                {
                    cout << "Go to sleep now! Rest up!";
                }
                else
                {
                    cout << "Finish what you need to and go to sleep!";
                }
            }


            break;

        case 2 :
            cout << "You are bored\nDo you have work to do?\nType 1 for yes, 2 for no\n";
            cin >> a;
            if(1==a)
            {
                cout << "You do have work to do\nCan you do that work right now?\nType 1 for yes, 2 for no\n";
                cin >> a;
                if (1==a)
                {
                    cout << "Do your work";
                }
                else
                {
                    cout << "Read a book";
                }

            }
            else
            {
                cout << "You do not have work to do\nDo you have a hobby?\nType 1 for yes, 2 for no\n";
                cin >> a;
                if (1==a)
                {
                    cout << "Go do your hobby";
                }
                else
                {
                    cout << "Find a hobby";
                }
            }

            break;

        case 3 :
            cout << "You are hungary\nDo you prefer sweet or salty snacks?\nType 1 for sweet, 2 for salty\n";
            cin >> a;
            if(1==a)
            {
                cout << "You like sweet snacks\nDo you prefer chocolate or fruit?\nType 1 for chocolate, 2 for fruit\n";
                cin >> a;
                if (1==a)
                {
                    cout << "Have a chocolate chip cookie";
                }
                else
                {
                    cout << "Have an orange";
                }

            }
            else
            {
                cout << "You like salty snacks\nDo you prefere popcorn or crackers?\nType 1 for popcorn, 2 for chips\n";
                cin >> a;
                if (1==a)
                {
                    cout << "Make popcorn";
                }
                else
                {
                    cout << "Open some chips";
                }
            }

            break;

        default:
            cout << "You are nothing, run program again when you are something" << "\n"; //this is the necessary default for the switch
            break;
    }

    return 0;

}


