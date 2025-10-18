// WRITE A PROGRAM TO CALCULATE THE HYPOTENUSE OF A RIGHT ANGLE TRIANGLE

#include <iostream>
#include <cmath>

int main(){
    double a;
    double b;
    std::cout<< "The 1st side is: ";
    std::cin>> a;
    std::cout<< "The 2nd side is: ";
    std::cin>> b;
    double c = sqrt(pow(a,2)+pow(b,2));
    std::cout << "Therefore, the hypotenuse is " << c;  

    
    return 0;
    
}