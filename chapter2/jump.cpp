
#include <iostream>
using namespace std;

int main()
{
    int init_value = 0;
    int sum = 0;
label_start:
    init_value++;
    sum += init_value;
    if (init_value < 10)
    {
        goto label_start;
    }
    cout << sum << endl;

    return 0;
}
