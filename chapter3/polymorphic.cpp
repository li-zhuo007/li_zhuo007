#include <iostream>
#include <string>
#include <vector>

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

class PlanningComponent : public Component
{
public:
    bool Init()
    {
        std::cout << "PlanningComponent initialized." << std::endl;
        return true;
    }
    bool Process()
    {
        std::cout << "PlanningComponent component processed." << std::endl;
        return true;
    }
};

class RoutingComponent : public Component
{
public:
    bool Init()
    {
        std::cout << "RoutingComponent initialized." << std::endl;
        return true;
    }
    bool Process()
    {
        std::cout << "Routing  Component component processed." << std::endl;
        return true;
    }
};

int main()
{
    RoutingComponent routing_component;
    PerceptionComponent perception_component;
    PlanningComponent planning_component;
    std::vector<Component *> components;
    components.push_back(&routing_component);
    components.push_back(&perception_component);
    components.push_back(&planning_component);

    for (auto &component : Component *& : components)
    {
        component->Init();
    }
}
