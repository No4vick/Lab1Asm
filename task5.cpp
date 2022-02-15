#include <iostream>
#include <iomanip>

void printDump(void *p, size_t N){
    for (int i = 0; i < N; i++)
        std::cout << std::hex << static_cast<unsigned *>(p + i) << std::endl;
}

int main(){
    unsigned int x = 0x8A8B8C8D;
    int y = 6;
    int z = -3;
    std::cout << "Integer:\n"; 
    printDump(&x, sizeof(x));
    // Получился прямой порядок (см. (а) в Л1.з5)

    std::cout << "Integer array:\n"; 
    int arr[3] = {x, y, z};
    printDump(&arr, sizeof(arr));

    std::cout << "Double-precision float (double):\n"; 
    double yd = y;
    printDump(&yd, sizeof(yd));
}