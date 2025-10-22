#include<iostream>
using namespace std;
// ***************************************************POINTERS********************************************************
// pointer is a data type which holds the address of other data types 
// & is the (address of) operator
// * is (value at) deference operator  
// int main(){
//     int a = 3;
//     int & c = a;
//     cout << c <<endl;
//     cout << "break" << endl;
//     int* b = &a;
//     cout<< "The address of a is : " << &a<< endl;
//     cout<< "Also the address of a is : " << b << endl;
//     cout<< "The value at address b is :" << *b << endl;
//     cout<< "Also the value at address b is :" << *(&a) << endl;
//     return 0;
// }


// int main(){
//     int a = 1;
//     int* b = &a; // stores the address of a
//     int** c = &b; // stores the address of b that is it stores the address of address of a 
//     cout<< "The value of integer a is :" << a << endl;
//     cout<< "The address of a is :" << b << endl;
//     cout<< "The address of b is :" << c << endl;
//     cout<< "The value at address of a is :" << *b << endl;
//     cout<< "The value at address of b is :" << *c << endl;
//     return 0;
// }



// ***************************************************ARAYS***********************************************************
// int main(){
//     int roll_no [] = {1,2,3,4};   // or we can write int roll_no [4] = {1,2,3,4};
//     cout<< roll_no[0] << endl;
//     cout<< roll_no[1] << endl;
//     cout<< roll_no[2] << endl;
//     cout<< roll_no[3] << endl;
//     cout<< "Break"<< endl;

//     int marks[5];
//     marks[0] = 0;
//     marks[1] = 25;
//     marks[2] = 50;
//     marks[3] = 75;
//     marks[4] = 100;

//     cout<< roll_no[0]<< endl;
//     cout<< roll_no[1]<< endl;
//     cout<< roll_no[2]<< endl;
//     cout<< roll_no[3]<< endl;
//     cout<< marks[0]<< endl;
//     cout<< marks[1]<< endl;
//     cout<< marks[2]<< endl;
//     cout<< marks[3]<< endl;
//     marks[4]= 99;         // arrays support reassignment
//     cout<< marks[4]<< endl;
// }

int main(){
        int marks[5];
        marks[0] = 0;
        marks[1] = 25;
        marks[2] = 50;
        marks[3] = 75;
        marks[4] = 100;
        for (int i = 0; i < 5; i ++){
            cout << "The marks of student "<<i+1 << " is " << marks[i]<< endl;
        }

    return 0;
    }
