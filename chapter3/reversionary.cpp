#include <iostream>
#include <string>

class Component
{
public:
    // 200M
    virtual bool Init() = 0;
    virtual bool Process() = 0;
    static std::string component_name_;

protected:
};

class PerceptionComponent : public Component
{
public:
    bool Init()
    {
        std::cout << "PerceptionComponent initialized." << std::endl;
        return true;
    }
    bool Process()
    {
        std::cout << "PerceptionComponent component processed." << std::endl;
        return true;
    }
};

int main()
{
    PerceptionComponent perceptioncomponent_1;
    perceptioncomponent_1.Process();
}
