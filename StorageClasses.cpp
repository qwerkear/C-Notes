#include <iostream>
//you can declare which namespace you want to use. Notice below we don't specify std::cout
using namespace std;
int accessibleExternally;

int main(){

    //You can use `auto` to automatically get the type. THIS IS NOT DYNAMIC TYPING
    //The compiler will figure out that this is an int. This costs some compiler time in case we don't want to specify type.
    auto a = 10;
    cout << "a: " << a << endl;

    //You can also specify something `static` so that memory stays allocated for the variable
    //even if you leave scope. This means when leaving scope it does not have to be freed.
    //Sometimes a static value can help performance, otherwise it is taking memory (if unused)
    static int b = 3;

    //Mutable

    //coming soon...

    //Thread Local

    //coming soon...

    //Register 
    //This does not apply to C++17 or higher

    //Remember: when performing an operation on a variable:
    //  1.) The CPO goes to RAM and gets the allocated memory block for the variable
    //  2.) Applies the operation on the value
    //  3.) Stores the new value in the RAM
    //RAM is fast, but sometimes we want to store the value close to the CPU (but not in RAM)
    //We can try registers:

    //register int c = 10;

    //While we call register and it compiles, this does not imply that a register is available.
    //If a register is not available, the value is stored in RAM.
    //This also means we can't use pointers. Objects in register do not have a memory adress.
    //If the below line prints a memory address, it was not stored in register.

    //cout << "memory address of register int c: " << &c <<endl;

    return 0;
}

//this makes accesibleExternally available globally with extern (assuming it is defined in a different file)
extern int accessibleExternally;