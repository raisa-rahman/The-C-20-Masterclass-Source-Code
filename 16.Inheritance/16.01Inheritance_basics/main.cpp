/*
    . Exploring inheritance: 
        .#1: Inheritance basics

        .#2: Protected members

        .#3: Playing with base class access specifiers
            . public, protected and private inheritance
            . see person.ixx file.

        .#4: Deep into private inheritance
            . see engineer.ixx
            . GCC doesn't like the use of namespaces there. 
            . Try this on other compilers.



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
    //inheritance_basics();
    //protected_members();
    //base_class_access_specifiers();
    //private_inheritance_up_close(); // GCC doesn't like this.
}