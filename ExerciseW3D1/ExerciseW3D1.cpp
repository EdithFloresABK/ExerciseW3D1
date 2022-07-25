#include <iostream>
using namespace std;

int main()
{
    cout << "Hello, Traveler! Please give me two integers. " << endl;
    int a, b;
    cout << "Integer A: ";
    cin >> a;
    cout << '\n';
    cout << "Integer B: ";
    cin >> b;
    cout << '\n';

    int* ptrA = &a;
    int* ptrB = &b;

    cout << "a is: " << a << endl;
    cout << "b is: " << b << endl;
    cout << "ptrA holds reference to value: " << *ptrA << endl;
    cout << "ptrB holds reference to value: " << *ptrB << endl;

    return 0;
}