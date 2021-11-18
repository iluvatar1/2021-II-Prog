#include <iostream>

int main(int argc, char *argv[]) {
    double val = 0.987766;
    double * ptr = nullptr; // pointer. Only stores memory addresses
    ptr = &val; // ptr stores x memory address
    //ptr = x; // error, cannot store common values
    std::cout << "val : " << val  << std::endl;
    std::cout << "&val: " << &val << std::endl;
    std::cout << "ptr : " << ptr  << std::endl; // prints val address
    std::cout << "*ptr: " << *ptr << std::endl; // prints val VALUE
    std::cout << "&ptr: " << &ptr << std::endl; // prints ptr address
    
    return 0;
}
