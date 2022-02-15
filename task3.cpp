#include <iostream>
#include <bitset>
#include <limits>

void print16(void *p){
    std::cout << "а) " << std::hex << *reinterpret_cast<unsigned short*>(p) << std::endl;
    std::cout << "б) " << std::bitset<16>(*reinterpret_cast<unsigned short*>(p)) << std::endl;
    std::cout << "в) " << std::dec << *reinterpret_cast<unsigned short*>(p) << std::endl;
    std::cout << "г) " << std::hex << *reinterpret_cast<signed short*>(p) << std::endl;
    std::cout << "д) " << std::bitset<16>(*reinterpret_cast<signed short*>(p)) << std::endl;
    std::cout << "е) " << std::dec << *reinterpret_cast<signed short*>(p) << std::endl;
    std::cout << std::endl;
}

int main(){
    unsigned short val;

    val = 0;
    print16(reinterpret_cast<unsigned short *>(&val));

    val = USHRT_MAX;
    print16(reinterpret_cast<unsigned short *>(&val));

    val = SHRT_MIN;
    print16(reinterpret_cast<short *>(&val));

    val = SHRT_MAX;
    print16(reinterpret_cast<short *>(&val));

    // Вариант 2
    // unsigned int x = 0x8A8B8C8D;
    short y = 6;
    short z = -3;

    print16(&y);
    print16(&z);
}