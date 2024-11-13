
#include <iostream>
using namespace std;

// enum
enum LidarStatus
{
    running,
    stop,
    scanning
} Lidar_status;

// enum class
enum class LidarStatus
{
    running,
    stop,
    scanning
} Lidar_status;

enum class CameraStatus
{
    running,
    stop,
    scanning
} Camera_status;


// type of enum class
enum class LidarStatus:int64_t
{
    running,
    stop,
    scanning
}Lidar_status

int main()
{
    Lidar_status = LidarStatus::scanning;
    int Lidar_num = static_cast<int>(Lidar_status);
    cout << "Lidar number is: " << Lidar_num;

    // type of char
    char wang = "li";
    
    return 0;
}
