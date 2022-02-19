#include <iostream>
#include <bitset>
#include <limits>

void print32(void *p){
    
    std::cout << "а) " << std::hex << *reinterpret_cast<unsigned int*>(p) << std::endl;
    std::cout << "б) " << std::bitset<32>(*reinterpret_cast<unsigned int*>(p)) << std::endl;
    std::cout << "в) " << std::dec << *reinterpret_cast<unsigned int*>(p) << std::endl;
    std::cout << "г) " << std::hex << *reinterpret_cast<signed int*>(p) << std::endl;
    std::cout << "д) " << std::bitset<32>(*reinterpret_cast<signed int*>(p)) << std::endl;
    std::cout << "е) " << std::dec << *reinterpret_cast<signed int*>(p) << std::endl;

    std::cout.setf(std::ios::fixed, std::ios::floatfield);  // Устанавливает режим fixed notation (фиксированной нотации)
    std::cout.precision(2);  // Устанавливает точность после запятой

    std::cout << "ж) " << std::fixed << *reinterpret_cast<float*>(p) << std::endl;
    std::cout << "з) " << std::scientific << *reinterpret_cast<float*>(p) << std::endl; // scientific - научная нотация (с экспонентой)
    std::cout << std::endl;
}

void print64(void *p){
    
    std::cout << "а) " << std::hex << *reinterpret_cast<unsigned long long*>(p) << std::endl;
    std::cout << "б) " << std::bitset<64>(*reinterpret_cast<unsigned long long*>(p)) << std::endl;
    std::cout << "в) " << std::dec << *reinterpret_cast<unsigned long long*>(p) << std::endl;
    std::cout << "г) " << std::hex << *reinterpret_cast<signed long long*>(p) << std::endl;
    std::cout << "д) " << std::bitset<64>(*reinterpret_cast<signed long long*>(p)) << std::endl;
    std::cout << "е) " << std::dec << *reinterpret_cast<signed long long*>(p) << std::endl;

    std::cout.setf(std::ios::fixed, std::ios::floatfield);  // Устанавливает режим fixed notation (фиксированной нотации)
    std::cout.precision(2);  // Устанавливает точность после запятой

    std::cout << "ж) " << std::fixed << *reinterpret_cast<double*>(p) << std::endl;
    std::cout << "з) " << std::scientific << *reinterpret_cast<signed long long*>(p) << std::endl; // scientific - научная нотация (с экспонентой)
    std::cout << std::endl;
}

int main(){
    // print32
    unsigned int val32;

    val32 = 0;
    print32(reinterpret_cast<unsigned int *>(&val32));

    val32 = UINT_MAX;
    print32(reinterpret_cast<unsigned int *>(&val32));

    val32 = INT_MIN;
    print32(reinterpret_cast<int *>(&val32));

    val32 = INT_MAX;
    print32(reinterpret_cast<int *>(&val32));

    unsigned int x = 0x8A8B8C8D;
    int y = 6;
    int z = -3;
    float xf = 0x8A8B8C8D;
    float yf = 6;
    float zf = -3;

    print32(&x);
    print32(&y);
    print32(&z);

    print32(&xf);
    print32(&yf);
    print32(&zf);

    // print64

    unsigned long long val64;

    val64 = 0;
    print64(reinterpret_cast<unsigned long long *>(&val64));

    val64 = ULLONG_MAX;
    print64(reinterpret_cast<unsigned long long *>(&val64));

    val64 = LLONG_MIN;
    print64(reinterpret_cast<long long *>(&val64));

    val64 = LLONG_MAX;
    print64(reinterpret_cast<long long *>(&val64));

    unsigned long long x_64 = 0x8A8B8C8D;
    long long y_64 = 6;
    long long z_64 = -3;
    double xf_64 = 0x8A8B8C8D;
    double yf_64 = 6;
    double zf_64 = -3;

    print64(&x_64);
    print64(&y_64);
    print64(&z_64);
    
    print64(&xf_64);
    print64(&yf_64);
    print64(&zf_64);
}