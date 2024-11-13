
#include <iostream>
using namespace std;
int main()
{
    // pointer
    int variable = 20;
    int *pointer_address = &variable;
    cout << "Value of variable: ";
    cout << variable << endl;
    cout << "Address stored in ip variable";
    cout << pointer_address << endl;
    cout << "Value of *ip variable";
    cout << *pointer_address << endl;
    return 0;

    // reference
    int a = 1633;
    int &b = a;
    cout << "b: " << b << endl;
    cout << "address: " << &a << " " << &b << endl;
    return 0;
}
