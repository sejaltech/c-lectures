//  // Print current year 
// #include <iostream>
// using namespace std;

// int getYear()
// {
//     return 2026;
// }
// int main()
// {
//     cout << "Current Year: " << getYear() << endl;
//     return 0;
// }


// Find factorial using function that returns value but has no arguments
// #include <iostream>
// using namespace std;

// int factorial()
// {
//     int n;
//     cout << "Enter a number: ";
//     cin >> n;

//     int fact = 1;

//     for (int i = 1; i <= n; i++)
//     {
//         fact = fact * i;
//     }

//     return fact;
// }

// int main()
// {
//     cout << "Factorial = " << factorial();
//     return 0;
// }


// Find factorial using function with parameter
#include <iostream>
using namespace std;

int factorial(int n)
{
    int fact = 1;

    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}

int main()
{
    int num = 5;

    int result = factorial(num);

    cout << "Factorial of " << num << " = " << result << endl;

    return 0;
}
