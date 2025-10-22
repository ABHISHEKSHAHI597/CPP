 /*************************************POINTERS AND ARRAYS************************************************/
 #include<iostream>
 using namespace std;
 
//  int main(){
//     int marks[] = {33,43,42,34,23};
//     int* p = marks;
//     cout<< "The marks of all the students are -\n";
//     cout<< *p << endl;
//     cout<< *(p+1) << endl;
//     cout<< *(p+2) << endl;
//     cout<< *(p+3) << endl;
//     cout<< *(p+4) << endl;
//     cout<< "or we can do this by\n";
//     cout<< *p << endl;
//     cout<< *(++p)<< endl;
//     cout<< *(++p)<< endl;
//     cout<< *(++p)<< endl;
//     cout<< *(++p)<< endl;
//     return 0;
//  }


// ******************************************STRUCTURES***********************************************
// struct data
// {
//     int age;
//     int marks;
//     string gender;
// };
// typedef struct data d;

// or we can do 
// typedef struct data
// {
//     int age;
//     int marks;
//     string gender;
// }d;

// int main() {
//     d a;
//     struct data b;
//     a.age = 18;
//     b.age = 15;
//     a.marks = 98;
//     b.marks = 91;
//     a.gender = "Male";
//     b.gender = "Female";
//     cout<< a.age << endl;
//     cout<< b.age << endl;
//     cout<< a.marks<< endl;
//     cout<< b.marks << endl;
//     cout<< a.gender << endl;
//     cout<< b.gender << endl;
// }



// *****************************************************ENUMS***************************************************
// int main(){
//     enum test{breakfast, second, dinner };
//     int a = breakfast;
//     int b = second;
//     int c = dinner;
//     cout<< breakfast;
//     cout<<a<< endl;
//     cout << second;
//     cout<<b<< endl;
//     cout<< dinner;
//     cout<<c<< endl;
//     return 0;
// }


// ****************************************************UNIONS****************************************************

union example{
    int mp;
    int sp;
};

int main(){
    union example a;
    a.mp = 1;
    a.sp = 2;
    cout<< a.mp<< endl; // in union out of mp and sp we can use only one if we define both then all the values are overwritten with the last one
    cout<< a.sp<< endl;  


    /* It's output is 
    2
    2 */
    
    return 0;
}