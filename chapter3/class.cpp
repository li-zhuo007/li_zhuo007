
#include <iostream>

// class
class Component
{
public:
    std::string Getname()
    {
        return name;
    };

private:
    std::string name;
    int count;
    int index;
    double timestamp_ms;
};

int main()
{
    Component routing_component;
    Component planning_component;
    Component perception_component;
    return 0;
}
