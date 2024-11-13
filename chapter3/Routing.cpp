#include <iostream>
#include <string>

class RoutingRequest
{
    std::string way_point_1_;
    std::string way_point_2_;
};

class Reader
{
};

class Writer
{
};

class Point
{
    Point()
    {
        x = 0.0;
        y = 0.0;
    }
    double x;
    double
};

class Edge
{
    Point start;
    Point end;
};

class TopoGraph
{
public:
    // Node node_;
    Edge edge_;
};

class RoutingComponent
{
public:
    RoutingComponent() = default;
    // default
    ~RoutingComponent() = default;
    ~RoutingComponent()
    {
        std::cout << "RoutingComponent destruct" << std::endl;
    }
    RoutingComponent()
    {
        std::cout << "RoutingComponent construct." << std::endl;
    }

    // reload the class
    RoutingComponent(std::string name)
    {
        std::cout << name << std::endl;
    }
    bool Process()
    {
        std::cout << "Routing Process" << std::endl;
        return true;
    };
};
std::string name_;
Reader reader_;
Writer writer_;

int main()
{
    RoutingComponent routing_component;
    routing_component.Process();
    bool result = routing_component.Process();
    RoutingComponent routing_component_2("you are bueatiful");
    return 0;
}
