#include <iostream>
using namespace std;

// int global = 5;


int main(){
    // *******************DIFFERENT DATA TYPES AND VARIABLES***************************
    // float x = 3.14;
    // double y = 3.14;
    // int global = 56;
    // cout<< x << std::endl;
    // cout<< y << std::endl;
    // cout<< global<< endl;
    // int a;
    // int b;

    
    // *******************************INPUT FUNCTION*****************************
/*     cout<< "Enter number 1: ";
    cin>> a;
    cout<< "Enter number 2: ";
    cin>> b;
    cout<< "Sum of the 2 numbers is: " << a+b;
*/

    // ********************************SOME ARITHMETIC OPERATORS********************************
    // cout << "BREAK\n";
    // int X = 2;
    // int Y = 3;
    // cout<< X++ <<endl;   // now X will be printed and its value increases by 1
    // cout<< Y-- <<endl;  // now Y will be printed and its value decreases by 1
    // cout<< ++X <<endl;      // now the value of X increases by 1 that now it becomes 2+1+1 = 4
    // cout<< --Y <<endl; 
    // cout << "break \n"; 
    
    
    //***********************************comparisonal operators**************************
    // int p = 2;
    // int q = 3;
    // cout << (p==q)<< endl;
    // cout << (p!=q)<< endl;
    // cout << (p>=q)<< endl;
    // cout << (p<=q)<< endl;
    // cout << (p>q)<< endl;
    // cout << (p<q)<< endl;
    // true is printed as 1 while false is printed as 0
    // Some logical operators LIKE AND , OR , NOT different from bitwise operators 
    // --> Bitwise operators will be taught later 


    // *****************************LOGICAL OPERATORS LIKE AND OR NOT ************************
    // cout<< "The output of ((p==q) && (p>=q)) is : "<< ((p==q) && (p>=q)) << endl;
    // cout<< "The output of ((p<q) && (p>=q)) is : "<< ((p<q) || (p>=q)) << endl;
    // cout<< "The output of !(p==q) is : "<< !(p==q)<< endl;
    
    
    
    //******************  ACCESSING GLOBAL VARIABLE AND LOCAL VARIABLE SIMULTANEOUSLY*********
    // cout<< "The value of local variable named global is: "<< global<< endl;
    // cout<< "The value of global variable named global is: "<<::global<< endl;



    // **********************************using size of operator*************************
    // double u = 3.14F;
    // double v = 3.14f;
    // long double g = 3.14L;
    // long double h = 3.14l;
    // cout << "The value of double u is: "<< u<< endl;
    // cout << "The value of double v is: "<< v<< endl;
    // cout << "The value of long double g is: "<< g<< endl;
    // cout << "The value of long double h is: "<< h<< endl;
 
    // cout << "The size of 3.14 (by default considered as double) is " << sizeof(3.14) << endl;
    // cout << "The size of 3.14f is " << sizeof(3.14f) << endl;
    // cout << "The size of 3.14F is " << sizeof(3.14F) << endl;
    // cout << "The size of 3.14l is " << sizeof(3.14l) << endl;
    // cout << "The size of 3.14L is " << sizeof(3.14L) << endl;


    // ************************REFERENCE VARIABLES****************************************
    // int a = 5;
    // int & b = a;
    // cout<< "The value of b is: " << b;

    
    // ****************************TYPECASTING***********************************
    // int a = 3;
    // double b = 3.657;
    // cout<< "The value of a is : " << a<< endl;
    // cout<< "The value of b is : " << b<< endl;
    // cout<< "Converting b into an int "<< int(b)<< endl;
    // cout << "a + b is : " <<  a + b << endl;
    // cout << "a + int(b) is : " <<  a + int(b) << endl;
    // cout << "a + (int)b is : " <<  a + (int)b << endl;



    // **********************USING CONST KEYWORD**************************************
    // const double pi = 3.14;
    // cout<< "the value of pi was : "<< pi<< endl;
    // pi = 2.14; this will throw an error 
    // cout<<"the value of pi is :" << pi << endl;
  return 0;
}
