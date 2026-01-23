// write a program to find is a child, growing age or adult?
// below 13 --> child
// 13 to 18 --> growing age
// above 18 --> adult

// #include <iostream>
// using namespace std;

// int main()
// {
//     int age = 15;
//     if (age < 13)
//     {
//         cout << "child" << endl;
//     }
//     else if(age >= 13 && age < 18)
//     {
//         cout << "growing age" << endl;
//     }
//     else
//     {
//         cout << "adult" << endl;
//     }
// }



// c ++ program to check if the given number is positive, negative or 
//zero if positive then check if it is even or odd

#include <iostream>
using namespace std;

int main()
{
    int num = 6; 
    if (num > 0)
    {
        cout << "Positive number" << endl;

        if (num % 2 == 0)
            cout << "Even number";
        else
            cout << "Odd number";
    }
    else if (num < 0)
    {
        cout << "Negative number";
    }
    else
    {
        cout << "Zero";
    }

    return 0;
}

