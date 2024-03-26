#include <iostream>
using namespace std;
//There is no hoisting in C++, functions need to be declared before we try to access them.
//C++ follows top-down, meaning defenitions need to be before anything else.
//For example: we can declare add below, call it in main and define it below that.

int add(int, int);

//The same applies to overloads; we have to declare them before we can overload them.
int add(int, int, int);
//If you want a default value, you have to start right to left.
//Meaning the second parameter cannot be defaulted if the third is not
int subtract(int, int = 1, int = 3);
string add(string, string);

//Here is a small example for the use case of a static variable:
void staticTestFunction() {
    static int count = 0;
    count++;
    cout << count << endl;
}
//Calling this function 3 times like we have in main prints 1, 2, and then 3
//Without static, the memory belonging to `count` is freed and the function prints 1 every time

int main(){
    cout << add(2, 10) << endl;
    cout << add(2, 10, 3) << endl;
    cout << add("i love", " concatination") << endl;
    cout << subtract(20 , 10) << endl;
    cout << subtract(20) << endl;
    staticTestFunction();
    staticTestFunction();
    staticTestFunction();


    return 0;
}

int add(int x, int y){
    return x + y;
}

//overloads
int add(int x, int y, int z){
    return x + y + z;
}

string add(string x, string y){
    return x + y;
}

int subtract(int x, int y, int z){
    return x - y - z;
}