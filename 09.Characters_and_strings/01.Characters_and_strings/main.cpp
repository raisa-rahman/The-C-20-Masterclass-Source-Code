/*
    . Manipulating characters: 
    . Topics: 
        . is_al_num
        . is_alphabetic
        . is_blank
        . is_upercase
        . is_digit
        . change_to_lowercase

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
    //handling_characters_demo();
    //handling_c_strings_demo();
    //handling_std_strings_demo();
    //escape_raw_string_literals_demo();
    handling_string_view_demo();
}