#include <iostream>

using namespace std;

int add(int x, int y)
{
    int z;
    z = x + y;
    return z;
}

int subtract(int x, int y)
{
    int z;
    z = x - y;
    return z;
}

int multiply(int x, int y)
{
    int z;
    z = x * y;
    return z;
}

int divide(int x, int y)
{
    int z;
    z = x / y;
    return z;
}

int main()
{
    int userChoice;
    int x;
    int y;
    int r;
    cout << "Please choose which operation you would like to preform: \n 1| Addition \n 2| Subtraction \n 3| Multiplication \n 4| Division" << endl;
    cin >> userChoice;
    switch (userChoice)
    {
        case 1:
        cout << "Please enter the first number you would like to add: " << endl;
        cin >> x;
        cout << "Please enter the second number you would like to add: " << endl;
        cin >> y;
        r = add(x,y);
        break;

        case 2:
        cout << "Please enter the minuend: " << endl;
        cin >> x;
        cout << "Please enter the subtrahend: " << endl;
        cin >> y;
        r = subtract(x,y);
        break;

        case 3:
        cout << "Please enter the first number you would like to multiply: " << endl;
        cin >> x;
        cout << "Please enter the second number you would like to multiply: " << endl;
        cin >> y;
        r = multiply(x,y);
        break;

        case 4:
        cout << "Please enter the dividend: " << endl;
        cin >> x;
        cout << "Please enter the divisor: " << endl;
        cin >> y;
        r = divide(x,y);
        break;

        default:
        cout << "Please enter a number that corresponds to an operation!" << endl;
        return -1;
        break;
    }

    cout << r;
    return 0;
}