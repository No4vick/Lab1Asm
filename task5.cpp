#include <iostream>
#include <iomanip>

void printDump(void *p, size_t N){
    unsigned char *ptr;
    ptr = reinterpret_cast<unsigned char*>(p);
    for (int i = 0; i < N; i++)
        std::cout << std::hex << std::setfill('0') << std::setw(2) << static_cast<unsigned>(*(ptr+i)) << std::endl;
}

int main(){
    char str1[] = "abcdzklmn";
    char str2[] = "абвёклмн";

    wchar_t strlong1[] = L"abcdzklmn";
    wchar_t strlong2[] = L"абвёклмн";

    std::cout << "String " << str1 << ":" << std::endl;
    printDump(&str1, sizeof(str1));

    std::cout << "String " << str2 << ":" << std::endl;
    printDump(&str2, sizeof(str2));

    std::cout << "String ";
    std::wcout << strlong1;
    std::cout << ":" << std::endl;
    printDump(&strlong1, sizeof(strlong1));

    std::cout << "String ";
    std::wcout << strlong2;
    std::cout << ":" << std::endl;
    printDump(&strlong2, sizeof(strlong2));
}