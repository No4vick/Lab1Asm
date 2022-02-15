#include <iostream>
#include <bitset>
#include <limits>

void print16(void *p){
    std::cout << "а) " << std::hex << reinterpret_cast<unsigned *>(p) << std::endl;
    // std::cout << "б) " << std::bitset<16>(reinterpret_cast<unsigned short*>(p)) << std::endl; Я хз чё делать
    std::cout << "в) " << std::dec << reinterpret_cast<unsigned *>(p) << std::endl;
    std::cout << "г) " << std::hex << reinterpret_cast<signed *>(p) << std::endl;
    // std::cout << "д) " << std::bitset<16>(reinterpret_cast<signed *>(p)) << std::endl; Я хз чё делать
    std::cout << "е) " << std::dec << reinterpret_cast<signed *>(p) << std::endl;
}

int main(){
    print16(reinterpret_cast<void *>(0));
    print16(reinterpret_cast<void *>(USHRT_MAX));
    print16(reinterpret_cast<void *>(SHRT_MIN));
    print16(reinterpret_cast<void *>(SHRT_MAX));

    unsigned int x = 0x8A8B8C8D;
    short y = 6;
    short z = -3;
}