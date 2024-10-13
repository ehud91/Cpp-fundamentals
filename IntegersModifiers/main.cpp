#include <iostream>



int main() {
    
    //int value1 {10};
    //int value2 {-300};

    signed int value1 {10};
    signed int value2 {-300};

    std::cout << "value1 : " << value1 << std::endl;
    std::cout << "value2 : " << value2 << std::endl;

    std::cout << "sizeof(value1) : " << sizeof(value1) << std::endl;
    std::cout << "sizeof(value2) : " << sizeof(value2) << std::endl;

    unsigned int value3 {4};
    //unsigned int value4 {-5};  // Compiler error

    short short_var {-32768}; // 2 Bytes
    short int short_int {455};
    signed short signet_short {122};
    signed short int signet_short {-456};
    unsigned short int signet_short {456};

    int int_var {55}; // 4 Bytes
    signed signed_int {66};
    signed int signed_short {122};
    signed short int signed_short_int {77};
    unsigned short int unsigned_short_int {77};

    long long_var {88}; // 4 Bytes
    long int long_int {33};
    signed long signed_long {44};
    signed long int signed_long_int {44};
    unsigned long int unsigned_long_int {44};

    std::cout << "Short variable : " << short_var << " , size : "
    << sizeof (short) << " bytes" << std::endl; 

    std::cout << "Short Int : " << short_int << " , size : "
    << sizeof (short int) << " bytes" << std::endl;

    std::cout << "Signed short : " << signed_short << " , size : "
    << sizeof (signed short) << " bytes" << std::endl;

    std::cout << "Signed short int : " << signed_short_int << " , size : "
    << sizeof (signed short int) << " bytes" << std::endl;

    std::cout << "Unsigned short int : " << unsigned_short_int << " , size : "
    << sizeof (unsigned short int) << " bytes" << std::endl;

    return 0;
}