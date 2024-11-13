
#include <iostream>
using namespace std;

int main()
{

    // while loop
    while (count < 10)
    {
        count++;
        std::cout << count << endl;
    }

    // do...while loop
    do
    {
        count++;
        std::cout << count << " ";
    } while (count < 20);

    // for loop
    for (int i = 0; i < count; ++i)
    {
        std::cout << i << " ";
    }

    // range based loop
    std::cout << std::endl;
    std::list<int> l{2, 3, 17, 37, 71};
    for (int n : l)
    {
        std::cout << " " << n;
    }
    return 0;

    // for_each
    std::list < int > 12 {2, 3, 17, 37, 71} std::for_each(first : l2.begin(), last : l2.end(), f : increase);
    return 0

           // break continue
           int count = 0;
    while (count < 10)
    {
        count++;
        std::cout << count << " ";
        continue;
        std::cout << count << " ";
    }
    return 0

           // if else
           string result = "success";
    bool is_ok = (result == "success" ? true : false);
    return 0
}
