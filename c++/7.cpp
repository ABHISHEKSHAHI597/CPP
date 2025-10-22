#include<iostream>
using namespace std;
//******************************************FUNCTIONS****************************************
// this code will run without any error but if we define this function below the main function the main function there will be error so that's why we use function prototype 


// int eligibility(int age){
//     if (age >= 18){
//         cout<<  "You are eligible to vote\n";
//     }
//     else if (age < 18){
//         cout<< "You are not eligible to vote\n";
//     }
//     return 0;
// }

// int main(){
//     int a;
//     cout<< "Enter your age: ";
//     cin>> a;
//     return eligibility(a);
// }


// **********************************function prototype*******************************************

int eligibility(int); 
// or we can simply write 

// int eligibility(int age);

void nothing(void);

int main(){
    int a;
    cout<< "Enter your age: ";
    cin>> a;
    return eligibility(a);
}

int eligibility(int age){
    if (age >= 18){
        cout<<  "You are eligible to vote\n";
    }
    else if (age < 18){
        cout<< "You are not eligible to vote\n";
    }
    nothing();
    return 0;
}

void nothing(){
    cout<<"This is a void function\n";
}