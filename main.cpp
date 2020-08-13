#include <iostream>
#include <unistd.h>

int main()
{
    std::cout << "Hello World; Starting 5 second timer" << std::endl;
    usleep(5000000);
    return 0;
}