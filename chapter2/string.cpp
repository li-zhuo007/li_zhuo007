
#include <iostream>
#include <string>
using namespace std;
int main()
{
    // join
    std::string module = "perception";
    std::string status = "runnning";
    std::string result = module + " " + status;
    std::cout << result << std::endl;
    return 0;

    // get the length of string
    std::cout << module.length() << std::endl;
    std::cout << module.size() << std::endl;
    return 0;

    // find the position
    std::string full_path = "/project/chapter_2/string.cpp";
    std::string file_name = "string.cpp";
    size_t found_pos = full_path.find(file_name);
    if (found_pos != std::string::npos)
    {
        std::cout << "File name found at position " << found_pos << std::endl;
    }
    else
    {
        std::cout << "File name not found." << std::endl;
    }
    return 0;

    // capture the substr of full string
    std::string found_str = full_path.substr(pos : 0, n : found_pos);
    std::cout << "File name not found." << std::endl;
}
