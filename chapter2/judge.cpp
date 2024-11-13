
#include <iostream>
using namespace std;

int main()
{
    // if
    int count = 14;
    int value = 14;
    if (value == count)
    {
        cout << "win!!!" << endl;
    }

    // if...else
    int count = 14;
    int value = 14;
    if (value == count)
    {
        cout << "win!!!" << endl;
    }
    else
    {
        cout << "lose!!!" << endl;
    }

    // switch
    int score = 1;
    switch (score)
    {
    case 1:
        cout << "case 1" << endl;
        score = 2;
        break;
    case 2:
        cout << "case 2" << endl;
        score = 3;
    }
    cout << score << endl;

    return 0
}
