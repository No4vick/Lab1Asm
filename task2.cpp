#include <iostream>

void print_size(const char* name, long size){
    if (size == 1){
        std::cout << name << ": " << size << " byte" << std::endl;
    }
    else {
        std::cout << name << ": " << size << " bytes" << std::endl;
    }
}

int main(){
    print_size("char", sizeof(char));
    print_size("signed char", sizeof(signed char));
    print_size("unsigned char", sizeof(unsigned char));
    print_size("wchar_t", sizeof(wchar_t));
    print_size("short", sizeof(short));
    print_size("unsigned short", sizeof(unsigned short));
    print_size("int", sizeof(int));
    print_size("unsigned int", sizeof(unsigned int));
    print_size("long", sizeof(long));
    print_size("unsigned long", sizeof(unsigned long));
    print_size("long long", sizeof(long long));
    print_size("unsigned long long", sizeof(unsigned long long));
    print_size("float", sizeof(float));
    print_size("double", sizeof(double));
    print_size("long double", sizeof(long double));
    print_size("size_t", sizeof(size_t));
    print_size("ptrdiff_t", sizeof(ptrdiff_t));
    print_size("void*", sizeof(void*));
    print_size("char*", sizeof(char*));
    print_size("int*", sizeof(int*));
    print_size("unsigned int*", sizeof(unsigned int*));
}