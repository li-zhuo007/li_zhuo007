
#include <iostream>
#include <list>
#include <vector>
using namespace std;

enum class LidarStatus
{
    running,
    stop,
    shutdown,
};

struct LidarData
{
    LidarStatus type;
    int channel_num;
    double distance[128];
    double intensity[128];
};

int main()
{
    int a = 1;
    LidarData Lidar_data_1;
    return 0;
}
