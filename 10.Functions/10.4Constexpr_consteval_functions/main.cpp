/*
    . constexpr and consteval functions
        . Demonstrate that the value is computed at compile time in compiler explorer.
        . consteval enforce that the function is evaluated at compile time. If it can't be evaluated at compile time, it will throw a compiler error.
    . Build instructions: 
        . Bare hands with CMake: 
            . cmake -S . -B build
            . cmake --build build

        . With CMake presets (VS Code): 
            . Select configure preset
            . Select build preset
            . Use the run and debug buttons: We can debug application right from the start.

        . Can also use presets on the command line.
    . Dependencies: 
        . gcc 14 or up (can be official container)
        . cmake 3.29 or up
        . ninja 1.11 or up
        . vcpkg and setting up the VCPKG_ROOT environment variable
        . gdb any version

    . Philosophy: 
        . All non module looking code should be hidden away in the utilities module.

*/

// One line comment
import utilities;

int main() {

    // For the evaluation to take place at compile time, we have
    // to remember to store the return value in a constexpr result variable.
    
    constexpr int result = get_value(4);// Compile time
    print_number(result);

    /*
    int some_var{5}; // Run time variable
    int result = get_value(some_var); // Run time
    print_number(result);
    */
}