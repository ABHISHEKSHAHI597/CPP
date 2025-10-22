// ***********************************manipulators in cpp*********************************
#include <iostream>
using namespace std;
#include <iomanip>

int test(){
    int a = 1;
    int b = 11;
    int c = 111;
    int d = 1111;
    cout<<"The value of a without setw is :" << a << endl;
    cout<<"The value of b without setw is :" << b << endl;
    cout<<"The value of c without setw is :" << c << endl;
    cout<<"The value of d without setw is :" << d << endl;
    cout<< "The value of a with setw is :" << setw(4)<< a << endl;
    cout<< "The value of b with setw is :" << setw(4)<< b << endl;
    cout<< "The value of c with setw is :" << setw(4)<< c << endl;
    cout<< "The value of d with setw is :" << setw(4)<< d << endl;
    
// ***********************integer and decimal division********************************
    cout << 3/(double)5*5<<endl;  
    cout << 3/5*5<<endl;       
    return 0;
}

// USING IF ELSE-IF ELSE STATEMENTS LADDER 

int test_1(){
    double cgpa;
    cout<< "Enter your cgpa: \n";
    cin >> cgpa;
if (cgpa > 0.0 && cgpa < 7.5) {
    cout << "You are not a good student" << endl;
}
else if (cgpa > 7.5 && cgpa < 10.0) {
    cout << "You are a good student" << endl;
}
else if (cgpa == 10.0) {
    cout << "You are the best student." << endl;
}
else {
    cout << "Invalid cgpa";    
}
    return 0;
}



// USING SWTICH CASE EXPRESSIONS
int test_3(){
    int age;
    cout<< "Tell me your age: \n";
    cin>> age;
    switch(age)
{
    case(0):
    cout<< "You are just born \n";
    break;
    case (18):
    cout<< "Now you are adult \n";
    break;
    default:
    cout<< "No special case\n";
    break;
}
    return 0;
}
int main(){
    test_3();
    return 0;
}
