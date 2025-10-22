// WRITE A PROGRAM TO CALCULATE THE HYPOTENUSE OF A RIGHT ANGLE TRIANGLE

#include <iostream>
using namespace std;
#include <cmath>

int main(){
    double a;
    double b;
    cout<< "The 1st side is: ";
    cin>> a;
    cout<< "The 2nd side is: ";
    cin>> b;
    double c = sqrt(pow(a,2)+pow(b,2));
    cout << "Therefore, the hypotenuse is " << c;
    return 0;
}