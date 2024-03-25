#include <iostream>
//import input output library stream
//Hashtag is used to initialize a pre-processor directive

#include <limits.h>
//this allows you to access the limits of datatypes

//C++ runs in a  main function, int is the return type.
int main(){
    // printing "Hello":
    // std is the namespace where the cout function lives. It is accessed with `::`
    // std uses the imported iostream library (see line 1)
    std::cout << "Hello, here are some notes on c++" << std::endl;
    // `<<` is used to mark input parameters
    // "feed/insert the cout function the hello string, followed by the endl (endline tag)"

    std::cout << "NUMERICAL" << std::endl;

    //Numerical Data Types
    //sizeof() returns the size in bytes                            Remember: byte is 8 bits
    std::cout << "Size of short (short): " << sizeof(short) << std::endl;
    std::cout << "Size of integer (int): " << sizeof(int) << std::endl;
    std::cout << "Size of long (long): " << sizeof(long) << std::endl;
    std::cout << "Size of long long (long long): " << sizeof(long long) << std::endl;
    std::cout << "Size of float (float): " << sizeof(float) << std::endl; //7 digits of accuracy
    std::cout << "Size of double (double): " << sizeof(double) << std::endl; //15 digits of accuracy

    //short max value:
    //short is 2 bytes, meaning 16 bits 1111 1111 1111 1111 = 65535

    short s = 65535;
    std::cout <<"short set to 65535: " << s << std::endl;
    unsigned short us = 65535;
    std::cout <<"unsigned short set to 65535: " << us << std::endl;
    //numerical values are signed by default, you can specify `signed ...` too

    //int max value:
    //short is 4 bytes, meaning 32 bits 1111 1111 1111 1111 1111 1111 1111 1111 = 4294967295
    int i = 4294967295;
    std::cout <<"int set to 4294967295: " << i << std::endl;
    unsigned int ui = 4294967295;
    std::cout <<"unsigned int set to 4294967295: " << ui << std::endl;

    //Using the max values from limits.h (see line 5)
    std::cout << "INT_MAX: " << INT_MAX << std::endl;
    std::cout << "UINT_MAX: " << UINT_MAX << std::endl;

    std::cout << "TEXTUAL" << std::endl;
    //Text data types

    //Notice we need to use std for strings (array of characters)
    std::cout << "Size of character (char): " << sizeof(char) << std::endl;
    std::cout << "Size of string (std::string): " << sizeof(std::string) << std::endl;

    //Boolean
    std::cout << "Size of boolean (bool): " << sizeof(bool) << std::endl;

    return 0;
}

//compile while inside this directory: g++ notes.cpp -o notes.exe