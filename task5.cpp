#include <iostream>
#include <iomanip>

void printDump(void *p, size_t N){
    unsigned char *ptr;
    ptr = reinterpret_cast<unsigned char*>(p);
    for (int i = 0; i < N; i++)
        std::cout << std::hex << std::setfill('0') << std::setw(2) << static_cast<unsigned>(*(ptr+i)) << std::endl;
}

int main(){
    unsigned int x = 0x8A8B8C8D;
    int y = 6;
    int z = -3;
    std::cout << "Integer:\n"; 
    printDump(&x, sizeof(x));
    

    std::cout << "Integer array:\n"; 
    int arr[3] = {x, y, z};
    printDump(&arr, sizeof(arr));

    std::cout << "Double-precision float (double):\n"; 
    double yd = y;
    printDump(&yd, sizeof(yd));
}