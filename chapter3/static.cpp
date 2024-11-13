#include <iostream>
#include <string>

class Test
{
public:
    // 200M
    int a = 0;
    int b = 1;
    static int c;
    int d = 3;
};

int Test::c = 2;

int main()
{
    Test test;
    Test test_2;
    std::cout << "Value of test.c: " << test.c << std::endl;
    test_2.c = 6;
    std::cout << "Value of test.c: " << test.c << std::endl;
    std::cout << "Value of test.c: " << test_2.c << std::endl;
    return 0;
}
