// #include <iostream>
// using namespace std;
// int main()
// {
//     char input = 'C';
//     switch (input)
//     {
//     case 'A':
//         cout << "A" << endl;
//         break;

//     case 'B': 
//         cout << "B" << endl;
//         break;

//         default:
//         cout << "Invalid input" << endl;
//     }
//     return 0;
// // }

// #include <iostream>
// using namespace std;

// int main()
// {
//     char ch = 'e'; 
//     switch (ch)
//     {
//     case 'a':
//     case 'e':
//     case 'i':
//     case 'o':
//     case 'u':
//         cout << "It is a vowel";
//         break;

//     default:
//         cout << "It is a consonant";
//     }

//     return 0;
// } 

// program to print day of week using switch case
#include <iostream>
using namespace std;
int main() {

    int day;
    cout << "Enter day number (1-7): ";
    cin >> day;
    switch (day) {
        case 1:
            cout << "Monday" << endl;
            break;
        case 2:
            cout << "Tuesday" << endl;
            break;
        case 3:
            cout << "Wednesday" << endl;
            break;
        case 4:
            cout << "Thursday" << endl;
            break;
        case 5:
            cout << "Friday" << endl;
            break;
        case 6:
            cout << "Saturday" << endl;
            break;
        case 7:
            cout << "Sunday" << endl;
            break;
        default:
            cout << "Invalid day number" << endl;
    }
    return 0;
}