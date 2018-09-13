#include <iostream>
#include <math.h>
// including the c++ math library to be used for this program

using namespace std;

int GCD(int a, int b)
{
    int rem = a%b;
    // divide a by b and find remainder (rem)
    while(rem != 0)
        // if R=0 then return B
    {
        a = b;
    // assign a = b
        b = rem;
       // assign b = rem (remainder)
        rem = a%b;
    }
    return b;
}
int main()
{
    int a,b;

    cout << "Enter a positive integers: ";
    cin >> a;
    // taking in and storing users input for a

    cout << "Enter another positive integers: ";
    cin >> b;
    // taking in and storing users input for b

    cout << "THE G.C.D of " << a <<" and "<<b<<" is "<<GCD(a,b);
    return 0;
}
