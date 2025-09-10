#include <iostream>
#include <algorithm>
#include <string>

using namespace std;
int main() {

cout << "Welcome to my program!" << endl;

    int n=5;
    cout << &n << endl;
    int* ptr = &n;
    cout << ptr << endl;
    cout << *ptr << endl;
    *ptr = 10;
    cout << n << endl;

    int v;
    int* ptr2 = &v;
    cout << "v=" << v << endl;

    system("pause>0");

    int age = 19;
    int *pAge = &age;
    double gpa = 3.0;
    double *pGpa = &gpa;
    string name = "Dakota";
    string *pName = &name;

    cout << *&gpa;;

    return 0;
}