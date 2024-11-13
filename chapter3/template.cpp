#include <iostream>
#include <string>

// general function
template <typename T>
void swap(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

template <typename T>
class make
{
    T temp;
};

template <typename T>
void print(T value)
{
    std::cout << value << std::endl;
}

// specific
template <>
void print<bool>(bool value)
{

    std::cout << (value ? "true" : "false") << std::endl;
}

int main()
{
    int a = 6;
    print(a);
    print(false);
}
