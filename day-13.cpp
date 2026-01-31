// 1. Write a program to declare a pointer and print the value of a variable using it.

// #include <stdio.h>

// int main() {
//     int a = 10;
//     int *p = &a;

//     printf("Value of a using pointer = %d", *p);
//     return 0;
// }

// 2. Write a program to print the address of a variable using a pointer.

// #include <stdio.h>

// int main() {
//     int a = 20;
//     int *p = &a;

//     printf("Address of a = %p", p);
//     return 0;
// }


// 3. Write a program to change the value of a variable using a pointer.
// #include <stdio.h>

// int main() {
//     int a = 5;
//     int *p = &a;

//     *p = 15;

//     printf("Updated value of a = %d", a);
//     return 0;
// }


// 4. Write a program to swap two numbers using pointers.

// #include <stdio.h>

// int main() {
//     int a = 10, b = 20;
//     int *p = &a, *q = &b;
//     int temp;

//     temp = *p;
//     *p = *q;
//     *q = temp;

//     printf("After swapping:\n");
//     printf("a = %d, b = %d", a, b);
//     return 0;
// }


// 5. Write a program to demonstrate a pointer to pointer.

// #include <stdio.h>

// int main() {
//     int a = 30;
//     int *p = &a;
//     int **pp = &p;

//     printf("Value of a = %d", **pp);
//     return 0;
// }


// 6. Write a program to pass a pointer to a function.
// #include <stdio.h>

// void change(int *x) {
//     *x = 50;
// }

// int main() {
//     int a = 10;
//     change(&a);

//     printf("Value of a = %d", a);
//     return 0;
// }


// 7. Write a program to add two numbers using pointers.

// #include <stdio.h>

// int main() {
//     int a = 5, b = 7;
//     int *p = &a, *q = &b;

//     printf("Sum = %d", *p + *q);
//     return 0;
// }

// 8. Write a program to find the smallest of two numbers using pointers.

// #include <stdio.h>

// int main() {
//     int a = 12, b = 8;
//     int *p = &a, *q = &b;

//     if (*p < *q)
//         printf("Smallest = %d", *p);
//     else
//         printf("Smallest = %d", *q);

//     return 0;
// }

// 9. Find Cube of a Number Use a pointer to calculate the cube of a given number.

// #include <stdio.h>

// int main() {
//     int n;
//     int *p = &n;

//     printf("Enter a number: ");
//     scanf("%d", p);

//     printf("Cube = %d", (*p) * (*p) * (*p));
//     return 0;
// }

// 10. Check Leap Year Use pointers to check whether a given year is a leap year.

// #include <stdio.h>

#include <stdio.h>

int main() {
    int year;
    int *p = &year;

    printf("Enter year: ");
    scanf("%d", p);

    if ((*p % 4 == 0 && *p % 100 != 0) || (*p % 400 == 0))
        printf("Leap Year");
    else
        printf("Not a Leap Year");

    return 0;
}
