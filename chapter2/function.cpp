#include <iostream>
using namespace std;

int Max(int num1, int num2);

int main()
{
    int a = 100;
    int b = 200;
    int the_bigger_one = Max(a, b);
    cout << "The bigger one: " << the_bigger_one << endl;
    return 0;
}

int Max(int num1, int num2)
{
    if (num1 > num2)
    {
        return num1;
    }
    else
    {
        return num2;
    }
}
