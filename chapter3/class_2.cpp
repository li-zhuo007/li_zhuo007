#include <iostream>
#include <string>

// copy the class
// TopoGraph topo_graph_1;
// TopoGraph topo_graph_2(topo_graph_1);
// TopoGraph topo_graph_3 = topo_graph_1;
class BigData
{
    // 200M
    int a[10000];
    double b[10000];
};

class Topograph
{
public:
    int edge;
    Topograph() = default;
    Topograph(Topograph &another)
    {
        edge = another.edge;
        big_data = another.big_data; // shallow copy

        // for (int i = 0; i < 10000; i++)
        // {
        //     big_data->a[i] = another.big_data->a[i];
        // } // deep copy

        std::cout << "TopoGraph copy constructor." << std::endl;
    }
    BigData *big_data;
    Topograph &operator=(const Topograph &other)
    {
        if (&other != this)
        {
            edge = other.edge;
            std::cout << "Topo Graph assign operator." << std::endl;
        }
        else
        {
            std::cout << "Dont copy yourself to yourself.";
            return *this;
        }
        return *this;
    }
};

int main()
{
    int a = 1;
    int b(a);
    std::cout << &a << std::endl;
    std::cout << &b << std::endl;
    Topograph topo_graph_0;
    Topograph topo_graph_1(topo_graph_0);
    // topo_graph_1 = topo_graph_1;
    std::cout << &topo_graph_1 << &topo_graph_0 << std::endl;
    return 0;
}
