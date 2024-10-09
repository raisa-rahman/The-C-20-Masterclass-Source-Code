/*
    . Polymorphism basics: 
        .#1: Static binding with inheritance
            . see poly_1.ixx
        .#2: Polymorphism with virtual functions
            . see poly_2.ixx

        .#3: The need for virtual destructors

        .#4: Sizes and slicing
            . see sizes_and_slicing.ixx
            . Exploring sizes of polymorphic objects and slicing.

        .#4: Polymorphism and collections
            . see polymorphism_and_collections.ixx
            . Storing polymorphic objects in collections.


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
    //poly_1_demo();
    //poly_2_demo();
    //poly_3_demo();
    //poly_4_demo();
    polymorphism_and_collections_demo();
}