#include <iostream>
#include <netinet/in.h>
#include <ifaddrs.h>
#include <arpa/inet.h>
#include <cstring>

int main() {
    struct ifaddrs *interfaces = nullptr;
    struct ifaddrs *ifa = nullptr;

    if (getifaddrs(&interfaces) == -1) {
        std::cerr << "Error getting network interfaces\n";
        return 1;
    }

    std::cout << "Your IP addresses:\n";

    for (ifa=interfaces; ifa != nullptr; ifa = ifa->ifa_next) {
        if (ifa->ifa_addr == nullptr) continue;

        if (ifa->ifa_addr->sa_family == AF_INET) {
            void* addr_ptr = &((struct sockaddr_in *) ifa->ifa_addr)->sin_addr;
            char ip[INET_ADDRSTRLEN];

            inet_ntop(AF_INET, addr_ptr, ip, INET_ADDRSTRLEN);
            std::cout << ifa->ifa_name << ":" << ip << std::endl;
        }
    }
    
    freeifaddrs(interfaces);
    return 0;
}

