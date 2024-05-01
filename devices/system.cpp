#include <sys/sysinfo.h>
#include <iostream>

int main() {
    struct sysinfo sys_info;

    if(sysinfo(&sys_info) != 0)
        std::cerr << "sysinfo-Error\n";
    else {
        std::cout << "Uptime : " << sys_info.uptime << "s\n";
        std::cout << "Total RAM   : " << sys_info.totalram << " bytes\n";
        std::cout << "Free RAM   : " << sys_info.freeram << " bytes\n";
    }
    return 0;
}